#!/bin/bash
gcc -c -fPIC *.c
gcc -shared -L. -o liball.so *.o
