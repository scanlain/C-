#include<stdio.h>

//int and int will give ans in int
//int and float will give ans in float
//float and float will give float

/*
Operator Precendance
When parenthesis are not present
 *,/,% > +- > =
When operators of equal priority are present left to right rule is applied.
Always use parenthesis in operations to improve the code readiblity

to type cast datatype we can add datatype exclusively -> for e.g int a = 3.4 , so float b = (int)a;
*/

void main(){
    // int a = 3.0;
    // int b = 9;
    // float c = a/b;
    // printf("%.2f \n", c);

    float num1 = 3.9;
    int num2 = (int)num1;
    printf("%d", num2);
}