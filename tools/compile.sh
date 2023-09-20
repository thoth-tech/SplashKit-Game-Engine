#!/bin/bash

# Specify the log file path.
log_file="compile.log"

# Get the current date and time and store it in a variable.
current_datetime=$(date '+%Y-%m-%d %H:%M:%S')

# Record the start time.
start_time=$(date +%s)

# List the .cpp files in the source directory and its subfolders.
# echo "List of .cpp files included:"
# find src -type f -name "*.cpp" | while read -r file; do
#     echo "    $file"
# done | tee "$log_file"  # Print to console and save to the log file.

# Run the g++ command with your desired options, redirecting both stdout and stderr to the log file.
skm g++ -I "./src/include" -I "./src/interfaces" $(find src -type f -name "*.cpp") -o game 2>&1 | tee -a "$log_file"

# Record the end time.
end_time=$(date +%s)

# Calculate the time taken for the script to complete.
elapsed_time=$((end_time - start_time))

# Optionally, you can add some message to indicate that the compilation is complete.
echo "Compilation completed."

# Add the start and end time to the log.
echo "Script started at: $current_datetime"
echo "Script completed at: $(date '+%Y-%m-%d %H:%M:%S')"
echo "Time taken: $elapsed_time seconds"
