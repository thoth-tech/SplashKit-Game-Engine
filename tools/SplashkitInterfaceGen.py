import re
import sys
import os
import argparse
import datetime

TOOL_NAME = "SplashkitInterfaceGen"
AUTHOR = "Coskun Kilinc"
VERSION = "0.1.0-alpha"
UNIVERSITY = "Deakin University"


def generate_cpp_preamble() -> str:
    return f"""\
// {TOOL_NAME} v{VERSION}
// Copyright (c) {datetime.datetime.now().year} {AUTHOR}. All rights reserved.
// Developed under collaboration with {UNIVERSITY}.
//
// This software is licensed under the MIT License.
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in 
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.
//
// WARNING: This code was auto-generated using {TOOL_NAME}. 
// Manual modifications might be overwritten if regenerated.
// Always test auto-generated code thoroughly before deployment.
// While every effort has been made to ensure the safety of this tool, 
// there is no guarantee or warranty that the generated code will work as 
// intended.
"""


def extract_includes_and_usings(header_content):
    """
    Extracts #include and using statements from a given header file content.
    """
    # Regular expression patterns to match #include and using statements
    include_pattern = re.compile(r"#include\s+<[^>]+>|#include\s+\"[^\"]+\"")
    using_pattern = re.compile(r"using\s+[^;]+;")

    # Extract matching lines
    includes = include_pattern.findall(header_content)
    usings = using_pattern.findall(header_content)

    return includes + [""] + usings


def create_class_name(filename):
    words = filename.split("_")

    class_name = "I" + "".join(word.capitalize() for word in words)
    return class_name


def create_interface_from_header(file_path, output_dir=None):
    interface_declaration = ""
    print("Directory:", output_dir)

    # Extract the filename (without extension and path) and prepend with "I"
    filename = os.path.basename(file_path).replace(".h", "")
    class_name = create_class_name(filename)

    # Read the file contents
    with open(file_path, "r") as file:
        file_contents = file.read()

    # Extract include and using statements
    includes_and_usings = extract_includes_and_usings(file_contents)

    # Extract function declarations
    function_declarations = re.findall(r"\b\w+\s+\w+\([^)]*\);", file_contents)

    # Begin the interface declaration with extracted include and using statements
    interface_declaration += generate_cpp_preamble()
    interface_declaration += f"#pragma once\n\n"
    interface_declaration += f'#include "{filename}.h"\n'
    interface_declaration += "\n".join(includes_and_usings)
    interface_declaration += f"\n\nclass {class_name}\n{{\npublic:\n"

    # Convert each function to a pure virtual function
    for func in function_declarations:
        interface_declaration += f"    virtual {func[:-1]} = 0;\n"

    # Close the class declaration
    interface_declaration += "};"

    # Save to file if output directory is specified
    if output_dir:
        # Check if the output directory exists, and create it if it doesn't
        if not os.path.exists(output_dir):
            os.makedirs(output_dir)

        output_file_path = os.path.join(output_dir, f"{class_name}.h")
        with open(output_file_path, "w") as out_file:
            out_file.write(interface_declaration)
        return f"Interface saved to {output_file_path}"
    else:
        return interface_declaration


def create_implementation_from_interface(
    header_content, namespace, naming, output_dir=None
):
    """
    Create a concrete implementation from an interface header content.
    """
    header_content_output = ""
    cpp_content_output = ""
    print("Directory:", output_dir)

    # Extract the class name from the header content and remove the "I" prefix
    interface_class_name_match = re.search(r"class\s+(I[A-Z]\w+)", header_content)
    if not interface_class_name_match:
        raise ValueError(
            "No interface class name found in the provided header content."
        )

    interface_class_name = interface_class_name_match.group(1)
    class_name = interface_class_name[1:]

    # Create the concrete class name using the provided naming
    concrete_class_name = naming + class_name

    # Create the concrete implementation header content
    header_content_output += generate_cpp_preamble()
    header_content_output += f"#pragma once\n\n"
    header_content_output += (
        f'#include "{interface_class_name}.h"\n#include "splashkit.h"\n'
    )

    header_content_output += f"namespace {namespace}\n"
    header_content_output += "{\n"
    header_content_output += f"\tclass {concrete_class_name} : public {interface_class_name}\n\t{{\n\tpublic:\n"

    # Extract virtual function declarations
    virtual_function_declarations = re.findall(
        r"virtual\s+\w+\s+\w+\([^)]*\)\s+=\s+0;", header_content
    )
    for func in virtual_function_declarations:
        header_content_output += (
            f"\t\t{func.replace('virtual ', '').replace(' = 0', ' override')}\n"
        )

    header_content_output += "\t};\n"
    header_content_output += "}\n"

    # Create the concrete implementation cpp content
    cpp_content_output += generate_cpp_preamble()
    cpp_content_output += (
        f'#include "{concrete_class_name}.h"\n#include "splashkit.h"\n'
    )
    cpp_content_output += f"namespace {namespace}\n"
    cpp_content_output += "{\n"

    for func in virtual_function_declarations:
        func_signature = func.replace("virtual ", "").replace(" = 0;", "").strip()
        return_type, rest = func_signature.split(" ", 1)
        func_signature = f"{return_type} {concrete_class_name}::{rest}"
        func_name = rest.split("(")[0]
        args = rest.split("(")[1].replace(")", "")
        if args:
            # Split the arguments by comma
            arg_list = [arg.strip() for arg in args.split(",")]

            # Extract variable names from the arg_list
            variable_names = [arg.split()[-1] for arg in arg_list]

            # Convert the list of variable names back to a string, separated by commas
            args = ", ".join(variable_names)
            args = args.replace("&", "")
            args = args.replace("*", "")

        if return_type == "void":
            cpp_content_output += f"\t{func_signature.replace('override', '').strip()} \n\t{{\n\t\t::{func_name}({args});\n\t}}\n\n"
        else:
            cpp_content_output += f"\t{func_signature.replace('override', '').strip()} \n\t{{\n\t\treturn ::{func_name}({args});\n\t}};\n\n"
    cpp_content_output += "}\n"

    # Save to files if output directory is specified
    if output_dir:
        header_file_path = os.path.join(output_dir, f"{concrete_class_name}.h")
        cpp_file_path = os.path.join(output_dir, f"{concrete_class_name}.cpp")

        with open(header_file_path, "w") as header_file:
            header_file.write(header_content_output)

        with open(cpp_file_path, "w") as cpp_file:
            cpp_file.write(cpp_content_output)

        return f"{concrete_class_name}.h and {concrete_class_name}.cpp saved to {output_dir}"

    return header_content_output, cpp_content_output


if __name__ == "__main__":
    parser = argparse.ArgumentParser(
        description="Convert C++ header files to interfaces or create concrete implementations from interfaces."
    )
    subparsers = parser.add_subparsers(dest="operation")

    # Existing functionality: create interface
    parser_interface = subparsers.add_parser(
        "interface", help="Create an interface from a header file."
    )
    parser_interface.add_argument(
        "header_file", type=str, help="Path to the header file."
    )
    parser_interface.add_argument(
        "--output_dir",
        type=str,
        help="Output directory for the generated interface. Defaults to current directory.",
        default=".",
    )

    # New functionality: create concrete implementation
    parser_implementation = subparsers.add_parser(
        "implementation",
        help="Create a concrete implementation from an interface header file.",
    )
    parser_implementation.add_argument(
        "interface_file", type=str, help="Path to the interface header file."
    )
    parser_implementation.add_argument(
        "--name_space",
        type=str,
        help="Namespace to use in the generated implementation.",
    )
    parser_implementation.add_argument(
        "--naming",
        type=str,
        default="Splashkit",
        help="Naming convention for the concrete class.",
    )
    parser_implementation.add_argument(
        "--output",
        type=str,
        help="Output directory for the generated implementation. Defaults to current directory.",
        default=None,
    )

    args = parser.parse_args()

    if args.operation == "interface":
        print(create_interface_from_header(args.header_file, args.output_dir))
    elif args.operation == "implementation":
        with open(args.interface_file, "r") as f:
            content = f.read()
        print(
            create_implementation_from_interface(
                content, args.name_space, args.naming, args.output
            )
        )
