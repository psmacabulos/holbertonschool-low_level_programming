#!/usr/bin/env bash
# create_c_templates.sh
# Create C source files where each file declares an int function
# named after the filename (sanitized) that simply returns 0.
# WARNING: this will overwrite existing files with the same names.

set -euo pipefail

files=(
    "0-print_name.c"
    "1-array_iterator.c"
    "2-int_index.c"
    "lists.h"
    "0-print_dlistint.c"
    "1-dlistint_len.c"
    "2-add_dnodeint.c"
    "3-add_dnodeint_end.c"
    "4-free_dlistint.c"
    "5-get_dnodeint.c"
    "6-sum_dlistint.c"
    "7-insert_dnodeint.c"
    "8-delete_dnodeint.c"
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

  # Special case: header file
  if [[ "$file" == "lists.h" ]]; then
    cat > "$file" <<EOF
#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * struct dlistint_s - doubly linked list node
 * @n: integer stored in the node
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;

/* Function prototypes */
size_t print_dlistint(const dlistint_t *h);
size_t dlistint_len(const dlistint_t *h);
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
void free_dlistint(dlistint_t *head);
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
int sum_dlistint(dlistint_t *head);
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);

#endif /* LISTS_H */
EOF
  else
    cat > "$file" <<EOF
#include "lists.h"

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
  fi

  printf "Created/overwritten: %s (function: %s)\n" "$file" "$funcname"
done

echo "Done."
