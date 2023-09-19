---
title: SplashkitInterfaceGen User Guide
aliases: Splashkit, Interface Generation Tool
tags: Python, Game Engine, Splashkit, User Guide
created: 2023-09-19
description: A user guide on how to utilize the SplashkitInterfaceGen tool and its functionalities.
---

# SplashkitInterfaceGen User Guide

## Overview

The `SplashkitInterfaceGen` tool is designed to assist in the development of an expandable game
engine using the Splashkit library. This tool automates the process of converting Splashkit
functionality to interfaces and subsequently generating concrete implementations around them.

## How to Use

### 1. **Prerequisites**:

-   Ensure Python3 is installed on your system.
-   Place the `SplashkitInterfaceGen.py` script in the `tools` directory of your project.

### 2. **Running the Tool**:

The tool is typically invoked via a shell script that automates the process of locating header
files, generating interfaces, and creating concrete implementations.

A provided shell script serves as an example:

```bash
#!/bin/bash

echo "Converting Splashkit headers to interfaces."
...
```

### 3. **Shell Script Explanation**:

-   **Setting the folder path**:  
    Specify the directory where your `.h` header files are located:

    ```bash
    folder_path="./include"
    ```

-   **Listing the `.h` files**:  
    The script will list all `.h` header files located in the source directory and its subfolders.

-   **Generating interfaces**:  
    The script will iterate through each header file and call the `SplashkitInterfaceGen.py` tool to
    generate the corresponding interface. The interfaces will be saved in the `./src/interfaces/`
    directory.

    ```bash
    python3 tools/SplashkitInterfaceGen.py interface "$file" --output "./src/interfaces/"
    ```

-   **Generating concrete implementations**:  
    For each generated interface (files starting with "I"), the script will create a concrete
    implementation. The implementations will be saved in the `./src/include/` directory.

    ```bash
    python3 tools/SplashkitInterfaceGen.py implementation "$file" --name_space "SplashkitGameEngine" --naming "Splashkit" --output "./src/include/"
    ```

### 4. **Tool Arguments and Options**:

While the shell script automates the tool's execution, you can also run the
`SplashkitInterfaceGen.py` tool manually. The primary arguments and options include:

-   **Action** (`interface` or `implementation`):  
    Determines whether to create an interface or a concrete implementation.

-   **`--output`**:  
    Specifies the directory where the generated files will be saved.

-   **`--name_space`**:  
    (For concrete implementations) The namespace to be used in the generated implementation.

-   **`--naming`**:  
    (For concrete implementations) Naming conventions or details to be followed in the generated
    implementation.
