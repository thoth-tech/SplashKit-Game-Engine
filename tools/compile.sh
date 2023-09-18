#!/bin/bash

# List the .cpp files in the source directory and its subfolders.
# echo "List of .cpp files included:"
# find src -type f -name "*.cpp" | while read -r file; do
#     echo "    $file"
# done

# Run the g++ command with your desired options.
skm g++ $(find src -type f -name "*.cpp") -o game

# Optionally, you can add some message to indicate that the compilation is complete.
# echo "Compilation completed."
