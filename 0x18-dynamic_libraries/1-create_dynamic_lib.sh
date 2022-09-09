#!/bin/bash

gcc -Wall -g -c *.c

gcc *.o -shared -o liball.so
