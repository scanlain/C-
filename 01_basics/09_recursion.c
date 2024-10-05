#include<stdio.h>

int power(int i, int j);
int fact(int n);

void main(){
    int n = 5;

    // int ans = fact(n);
    // printf("Factorial : %d \n", ans);

    int i=2, j=3;

    int powAns = power(i, j);
    printf("Power of %d is to %d : %d \n", i, j, powAns);
}

int power(int i, int j){
    if(j==1){
        return i;
    }
    else{
        return i * power(i,j--);
    }
}

int fact(int num){
    if(num == 1){
        return 1;
    }
    else{
        return num * fact(num-1);
    }
}