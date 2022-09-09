#!/bin/sh
gcc *.c -c -fPIC
# creating the object file

gcc *.o -shared -o liball.so
# Making the .o files executable
