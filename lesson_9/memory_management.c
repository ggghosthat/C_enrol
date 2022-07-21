#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <errno.h>

extern int errno;

void main()
{
    char name[30];
    char *description;

    strcpy(name, "Ildar Ildar");

    // description = malloc(200 * sizeof(char));
    description = calloc(200, sizeof(char));

    if (description == NULL){
        printf("Error occured %s\n", strerror(errno));
    }
    else{
        strcat(description, "Thi is simple description.");
    }

    printf("This is name : %s\n", name);
    printf("This is description : %s\n", description);

    free(description);
}

