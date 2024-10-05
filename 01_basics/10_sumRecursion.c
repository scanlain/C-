#include<stdio.h>

int sum(int);

void main(){

    int n =5;
    int ans = sum(n);
    printf("Sum of %d nums is : %d \n", n, ans);
}

int sum(int num){
    if(num == 0){
        return 0;
    }
    else{
        return num + sum(num-1);
                
    }   
}