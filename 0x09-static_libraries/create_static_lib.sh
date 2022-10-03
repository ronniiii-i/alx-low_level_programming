#!/bin/bash
gcc -Wall -pedentic -Werror -Wextra -c *.c
ar rc liball.a *.o
