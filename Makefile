CC = gcc
Cflags = -Wall -lm

output: Calparser.c
	$(CC) $(Cflags) Calparser.c -o Calparser
