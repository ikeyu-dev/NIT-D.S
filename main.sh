# Bash
#!/bin/bash

SOURCE_FILE="thirteen_class.c"

OUTPUT_FILE="main"

# コンパイル
gcc "$SOURCE_FILE" -o "$OUTPUT_FILE"

if [ $? -eq 0 ]; then
    echo "running..."
    ./"$OUTPUT_FILE"
else
    echo "compilation failed"
fi