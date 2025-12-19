*This project has been created as part of the 42 curriculum by **kanahiz***.

## Description

Its primary goal is to deepen understanding of variadic functions, parsing, type handling, and low-level formatted output in C, while producing a fully functional alternative that mimics the behavior of the real printf.

## Instructions

1. **Compilation:**

The ft_printf project is compiled using the provided Makefile. The Makefile includes the following standard rules:

- make or make all: Compiles the project and creates the static library libftprintf.a.
- make clean: Removes object files (.o).
- make fclean: Removes object files and the library libftprintf.a.
- make re: Performs a full recompile (fclean followed by all).

2. **Usage:**
To use ft_printf in your own programs:

- Include the header in your source files:
    - #include "ft_printf.h"
- Compile your program and link it with the generated library:
    - cc -Wall -Werror -Wall main.c libftprintf.a

3. **Running the Project:**
- Once compiled into an executable, run your program as usual:
    - ./a.out
- The ft_printf function behaves like the standard printf: it writes formatted output to stdout and returns the number of characters printed (or a negative value on error).
## Resources

- [Variadic functions](https://youtu.be/M94S6FOIeEM?si=zk9xe0NI5t-XkI2q)
- [va_list](https://youtu.be/oDC208zvsdg?si=2ANR7FAd-gGqCWYH)
- [printf in c](https://www.geeksforgeeks.org/c/printf-in-c/)
- I created a summary for this project that includes all the necessary information and the knowledge I gained - [View the summary](https://www.tldraw.com/f/Sb9hEPG2vwclITXc7jr1G?d=v-803.637.1626.2005.0_P4X33nTOHsnJQylO99_)


# Result
- This project helped me strengthen my understanding of :
    - Deep understanding of variadic functions
    I learned how to use va_list, va_start, va_arg, and va_end.

    - Better mastery of C fundamentals
Especially pointers, memory management, and string manipulation.

    - How formatting works internally
You understood how format specifiers (%d, %s, %x, %p, etc.) are parsed and handled.

    - Cleaner and more modular code
Using helper functions, structured logic, and readable code.

    - Attention to edge cases
Handling NULL, zero values, negative numbers, and unexpected inputs.

    - Stronger debugging skills
Using tools like printf tests, gdb, or valgrind to find and fix errors.
