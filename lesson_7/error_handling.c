#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

extern int errno;


void not_found_file(){
    FILE *fp;
    int errnum;

    fp = fopen("nofile.txt", "r");

    if (fp == NULL)
    {
        errnum = errno;
        fprintf(stderr, "Error number : %d\n", errnum);
        perror("This dummy error siplayed by perror func : ");
        fprintf(stderr, "Error message : %s\n", strerror(errnum));

    }
    else 
    {
        fclose(fp);
    }
}

void zero_devided(){
    int dividend = 20;
    int divisor = 0;
    int quotient;

    if (divisor == 0){
        fprintf(stderr, "Division by zero ! \nexiting ... \n");
        exit(EXIT_FAILURE);
    }

    quotient = dividend / divisor;
    fprintf(stderr, "Exception : %s\n", quotient) ;
    exit(EXIT_SUCCESS);
}

void main(){
    zero_devided();
}