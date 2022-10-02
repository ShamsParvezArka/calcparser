CC = gcc
Cflags = -Wall -lm

output: calcparser.c
	$(CC) $(Cflags) calcparser.c -o calcparser
