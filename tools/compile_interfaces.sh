#!/bin/bash

echo "Converting Splashkit headers to interfaces."

# Specify the folder path you want to search for .h files.
folder_path="src/include"

# List the .h files in the source directory and its subfolders.
echo "List of .h files included:"
find "$folder_path" -type f -name "*.h" | while read -r file; do
    echo "    $file"
done

# Run the python script
python3 tools/translator.py  $(find "$folder_path" -type f -name "*.h") -o "./converted/"

echo "Conversion completed."
