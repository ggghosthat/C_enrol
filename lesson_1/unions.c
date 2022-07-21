#include <stdio.h>
#include <string.h>

union test_union
{
    int c;
    float f;
    char str[20];
};

int main()
{
    union test_union test;

    test.c = 20;
    printf("%d", test.c);

    test.f = 2.0;
    printf("%f", test.f);

    strcpy(test.str, "Hello world");
    printf(test.str);

    printf("==========");
    printf("%d", test.c);
    printf("%f", test.f);
    printf(test.str);
}
