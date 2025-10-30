#!/usr/bin/env bash
# create_c_templates.sh
# Create C source files where each file declares an int function
# named after the filename (sanitized) that simply returns 0.
# WARNING: this will overwrite existing files with the same names.

set -euo pipefail

files=(
  "0-reset_to_98.c"
  "1-swap.c"
  "2-strlen.c"
  "3-puts.c"
  "4-print_rev.c"
  "5-rev_string.c"
  "6-puts2.c"
  "7-puts_half.c"
  "8-print_array.c"
  "9-strcpy.c"
  "100-atoi.c"
)

sanitize_name() {
  local name="$1"
  # remove extension if present
  name="${name%.*}"
  # replace any character that is not alphanumeric or underscore with underscore
  name="$(printf '%s' "$name" | sed 's/[^a-zA-Z0-9_]/_/g')"
  # if name starts with a digit, prefix with underscore
  if printf '%s' "$name" | grep -qE '^[0-9]'; then
    name="_${name}"
  fi
  printf '%s' "$name"
}

for file in "${files[@]}"; do
  funcname="$(sanitize_name "$file")"

  cat > "$file" <<EOF
#include "main.h"

/**
 * ${funcname} - placeholder function derived from filename ${file}
 *
 * Return: 0
 */
int ${funcname}(void)
{
    return (0);
}
EOF

  printf "Created/overwritten: %s (function: %s)\n" "$file" "$funcname"
done

echo "Done."
