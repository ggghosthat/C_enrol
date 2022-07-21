#include <stdio.h>
#include <string.h>

struct
{
    unsigned int age : 3;
} Age;


void main(){
    Age.age = 4;
    printf("Size of age struct : %d\n", sizeof(Age));
    printf("Value of age struct : %d\n", Age.age);

    Age.age = 7;
    printf("Size of age struct : %d\n", sizeof(Age));
    printf("Value of age struct : %d\n", Age.age);

    Age.age = 8;
    printf("Size of age struct : %d\n", sizeof(Age));
    printf("Value of age struct : %d\n", Age.age);

}