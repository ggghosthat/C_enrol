#include <stdio.h>
#include <string.h>

void main(){
    // int c;

    // printf("Enter your text : \n");
    // c = getchar();

    // printf("U typed : \n");
    // putchar(c);

    char buffer[200];

    printf("Enter your text : \n");
    gets(buffer);

    printf("U typed : \n");
    puts(buffer);

    printf("Scanf  func hello : \n");
    scanf("Hello %s", buffer);

    printf("Yall %s", buffer[1]);

}