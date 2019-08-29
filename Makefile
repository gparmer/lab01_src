CC=gcc
CFLAGS=-g

.PHONY: clean

all: hello

hello: hello.c
		@$(CC) $(CFLAGS) -o hello hello.c

clean:
		@rm -rf hello