#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef HELLO_H
#define HELLO_H

int hello(char *);

void *ec_malloc(size_t sz)
{
        void *ptr;
        if ((ptr = malloc(sz)) == NULL) {
            perror("Error: ");
            exit(EXIT_FAILURE);
        }
        return ptr;
}

#endif