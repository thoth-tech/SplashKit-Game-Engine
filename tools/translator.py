import re
import sys
import os


def extract_includes_and_usings(header_content: str) -> list:
    """
    Extracts #include and using statements from a given header file content.

    Args:
        header_content (str): The content of the header file.

    Returns:
        list: A list containing extracted #include and using statements.
    """
    # Regular expression patterns to match #include and using statements
    include_pattern = re.compile(r"#include\s+<[^>]+>|#include\s+\"[^\"]+\"")
    using_pattern = re.compile(r"using\s+[^;]+;")

    # Extract matching lines
    includes = include_pattern.findall(header_content)
    usings = using_pattern.findall(header_content)

    return includes + [""] + usings


def create_class_name(filename: str) -> str:
    """
    Creates a class name based on the provided filename.

    Args:
        filename (str): The filename to generate the class name from.

    Returns:
        str: The generated class name.
    """
    words = filename.split("_")

    class_name = "I" + "".join(word.capitalize() for word in words)
    return class_name


def create_interface_from_header(file_path: str, output_dir: str = None) -> str:
    """
    Creates an interface declaration from a C++ header file.

    Args:
        file_path (str): The path to the C++ header file.
        output_dir (str, optional): The directory where the interface file will be saved.

    Returns:
        str: The interface declaration as a string or a message indicating where it was saved.
    """
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
    interface_declaration += f"#pragma once\n\n"
    interface_declaration += "\n".join(includes_and_usings)
    interface_declaration += f"\n\nclass {class_name} {{\npublic:\n"

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


if __name__ == "__main__":
    args = sys.argv[1:]
    if len(args) < 1:
        print("Please provide one or more .h file paths as arguments.")
        sys.exit(1)

    output_dir = os.getcwd()

    if "-o" in args:
        o_index = args.index("-o")
        output_dir = args[o_index + 1]
        # Remove -o and output_dir from args
        args.pop(o_index)
        args.pop(o_index)

    for file_path in args:
        print(create_interface_from_header(file_path, output_dir), "\n")
