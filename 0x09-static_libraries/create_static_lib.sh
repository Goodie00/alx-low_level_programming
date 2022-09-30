#!/bin/bash
<<<<<<< HEAD
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -c *.c
ar -rc liball.a *.o
=======
gcc -c *.c
ar rc liball.a *.o
ranlib liball.a
>>>>>>> b31fb86cdcddb5494f5516d047fd06f0a8883a50
