#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef HELLO_H
#define HELLO_H

int hello(char *);

<<<<<<< HEAD
void *ec_malloc(size_t sz)
{
        void *ptr;
        if ((ptr = malloc(sz)) == NULL) {
            perror("Error: ");
            exit(EXIT_FAILURE);
        }
        return ptr;
}

=======
>>>>>>> f4d20a3bcc877f44a1bd5f45d422ced5b40415df
#endif