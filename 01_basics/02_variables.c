#include<stdio.h>

//variable name denotes the name of memory location

/*
Rules for naming variables
-vars can't have whitespaces i.e int is good ->  can't be a variable
-vars can't have special character, symbols, brackets, commas in their name
-vars can start with alphabets or _
*/

void main(){
    // int a = 10;
    // char ch = 'b';
    // printf("%d \n", a);
    // printf("%c", ch);

    int i=10;
    int j = i;
    j = 20;
    printf("i = %d", i);
    printf("j = %d", j);
}