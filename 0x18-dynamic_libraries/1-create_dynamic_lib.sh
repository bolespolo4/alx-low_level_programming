#!/bin/bash
gcc -fPIC 0c *.c
gcc -shared *.o -o liball.so
