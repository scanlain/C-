#include<stdio.h>

int fibo(int);

void main(){
    int n = 5;
    int ans = fibo(n);
    printf("%dth term is : %d \n", n, ans);
}

int fibo(int num){
    if(num==1 || num==2){
        return num-1;
    }
    else{
        return fibo(num-1) + fibo(num-2);
    }
}