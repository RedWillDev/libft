# Libft

## Description

Libft is a static C library (`libft.a`) that reimplements selected standard C
library functions and adds helpers for strings, output, and linked lists. The
project builds a reusable library for future assignments in the 42 curriculum.

This version follows the **Libft subject v19.2**. All three parts are mandatory:
there is no separate linked-list bonus in this version.

### Library contents

- **Part 1 – Libc functions (23):** character classification and conversion,
  memory handling, string handling, numeric conversion, and allocation.
- **Part 2 – Additional functions (11):** substrings, string joining/trimming,
  splitting, integer-to-string conversion, string mapping/iteration, and output
  on file descriptors.
- **Part 3 – Linked lists (9):** create, insert, traverse, measure, delete,
  clear, and map linked lists of `t_list` nodes.

See `libft.h` for public prototypes and the `t_list` structure.

## Instructions

The project needs a C compiler, `make`, and `ar`.

```sh
make          # compile all 43 functions into libft.a
make clean    # remove generated object files
make fclean   # remove objects and libft.a
make re       # rebuild
```

Compilation uses `cc -Wall -Wextra -Werror`. To use the library in a C project,
include `libft.h` and link the archive:

```sh
cc -Wall -Wextra -Werror main.c libft.a -o app
```

To check the 42 style rules and the 42 source headers locally, run:

```sh
norminette -R CheckForbiddenSourceHeader
```

No generated executable, `.o`, `.gch`, or archive needs to be committed.

## Resources

- 42 Libft subject, version 19.2.
- `man 3` pages for the standard libc functions (e.g. `strlen`, `memcpy`,
  `calloc`, `strlcpy`, and `strlcat`).
- C standard library documentation for memory allocation and string handling.
