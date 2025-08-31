gcc src/q9.c -o q9
#!/bin/bash
# Exit immediately if a command exits with a non-zero status
set -e

# Variables
SRC_FILE="src/q9.c"
BIN_FILE="q9"
TEST_INPUT="10"
EXPECTED_WEEK="1 week"
EXPECTED_DAYS="3 days"

# Compile the source file
gcc "$SRC_FILE" -o "$BIN_FILE"

# Run the program with test input and capture output
output=$(echo "$TEST_INPUT" | ./$BIN_FILE)

# Check for expected output
if echo "$output" | grep -q "$EXPECTED_WEEK" && echo "$output" | grep -q "$EXPECTED_DAYS"; then
  echo "✅ Q9 passed"
  result=0
else
  echo "❌ Q9 failed"
  result=1
fi

# Clean up
rm -f "$BIN_FILE"
exit $result
