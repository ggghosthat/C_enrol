#include <stdio.h>
#include <string.h>

void main() {
    int var_integer  = 10;
    int *point;

    point = &var_integer;

    printf("This is size of var : %d\n", sizeof(var_integer));
    printf("This is addres of var : %x\n", &var_integer);
    printf("This is addres of pointer : %x\n", &point);
    printf("This is value stored int point : %d\n", *point);
    printf("This is addres stored in point : %x\n", point);
}