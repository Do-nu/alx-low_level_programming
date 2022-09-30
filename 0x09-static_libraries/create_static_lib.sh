#!/bin/bash
gcc -c *.c
ar rc libaill.a *.o
ranlib libaill.a
