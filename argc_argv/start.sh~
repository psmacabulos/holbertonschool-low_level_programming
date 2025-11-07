#!/usr/bin/env bash
# create_c_templates.sh
# Create C source files where each file declares an int function
# named after the filename (sanitized) that simply returns 0.
# WARNING: this will overwrite existing files with the same names.

set -euo pipefail

files=(
    "0-puts_recursion.c"
    "1-print_rev_recursion.c"
    "2-strlen_recursion.c"
    "3-factorial.c"
    "4-pow_recursion.c"
    "5-sqrt_recursion.c"
    "6-is_prime_number.c"
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
 * ${funcname} - 
 * @
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
