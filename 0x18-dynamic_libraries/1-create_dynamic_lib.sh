#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra *.c -c -fPIC
gcc *.o -shared -o liball.so
