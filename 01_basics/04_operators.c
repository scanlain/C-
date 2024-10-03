#include<stdio.h>
#include<math.h>

//if we compile the program as usual it won't work because we need to link the Math.h to the compiler 
//gcc 01_basics/04_operators.c -o 04_operators -lm (use this command)

//to calculate remainder for INTEGER we use %
//to calculate remainder for FLOAT we use fmod()

void main(){

    int a = 10.5;
    int b = 5.2;

    printf("Remainder is : %d \n", fmod(a, b));
}