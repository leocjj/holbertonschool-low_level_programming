# Project 0x11.

C - printf.

## Learning Objectives

* Write your own printf function.


### Requirements:

* Allowed editors: vi, vim, emacs
* All your files will be compiled on Ubuntu 14.04 LTS
* Your programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic
* All your files should end with a new line
* A README.md file, at the root of the folder of the project is mandatory
* Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
* You are not allowed to use global variables
* No more than 5 functions per file
* In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
* The prototypes of all your functions should be included in your header file called holberton.h
* Don’t forget to push your header file
* All your header files should be include guarded
* Note that we will not provide the _putchar function for this project

```

### Authorized functions and macros

* write (man 2 write)
* malloc (man 3 malloc)
* free (man 3 free)
* va_start (man 3 va_start)
* va_end (man 3 va_end)
* va_copy (man 3 va_copy)
* va_arg (man 3 va_arg)


### Tasks

* 0. function that produces output according to a format.
* 1. Handle the following conversion specifiers: d, i.
* 2. Create a man page for your function.
* 3. Handle the following custom conversion specifiers: b.
* 4. Handle the following conversion specifiers: u, o, x, X.
* 5. Use a local buffer of 1024 chars in order to call write as little as possible.
* 6. Handle the following custom conversion specifier: S.
* 7. Handle the following conversion specifier: p.
* 8. Handle the following flag characters for non-custom conversion specifiers: +, space, #.
* 9. Handle the following length modifiers for non-custom conversion specifiers: l, h. Conversion specifiers to handle: d, i, u, o, x, X.
*10. Handle the field width for non-custom conversion specifiers.
*11. Handle the precision for non-custom conversion specifiers.
*12. Handle the 0 flag character for non-custom conversion specifiers.
*13. Handle the - flag character for non-custom conversion specifiers.
*14. Handle the following custom conversion specifier: r.
*15. Handle the following custom conversion specifier: R.
*16. All the above options work well together.


### Coding style tests

[Holberton Betty style test.](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl)


## Built With

* Emacs editor.
* gcc 4.8.4 compiler.
* Linux vagrant-ubuntu-trusty-64 3.13.0-170-generic


## Authors

* **Leonardo Calderon J.** - *Initial work* - [LeoCJJ](https://github.com/leocjj)
* **Michel Molina.** - *Initial work* - [MichelAlejo](https://github.com/michelalejo)
10/25/2019