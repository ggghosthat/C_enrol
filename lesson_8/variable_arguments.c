#include <stdio.h>
#include <stdarg.h>


long average(int num,...){
    va_list valist;
    long sum = 0L;

    va_start(valist, num);

    for(int i = 0; i < num; i++){
        sum += va_arg(valist, int);
    }

    va_end(valist);

    return sum/num;
}


void main(){    
   printf("Average of 2, 3, 4, 5 = %d\n", average(4, 2,3,4,5));
   printf("Average of 5, 10, 15 = %d\n", average(3, 5,10,15));
}