# Compiler and flags
CC=gcc
CFLAGS= -Werror -Wall -std=c11

# Targets
main: main.o
	$(CC) $(CFLAGS) $^ -o $@

main.o: main.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f main.o main

.PHONY: clean
