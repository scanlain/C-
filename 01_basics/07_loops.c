#include<stdio.h>
#include <stdbool.h>

void main(){
    
    int n;

    // printf("Enter the number: ");
    // scanf("%d", &n);
    
    // for(int i=1; i<11; i++){
    //     printf("%d * %d = %d \n", n,i,(n*i));
    // }

    // for (int i = 10; i > 0; i--)
    // {
    //     printf("%d * %d = %d \n", n,i,(n*i));
    // }

    int num = 1;
    int sum = 0;

    // while(num > 0){
    //     sum += num;
    //     num--;
    // }

    // for(int i=1; i<11; i++){
    //     sum += i;
    // }

    // do{
    //     sum+=num;
    //     num--;
    // }while(num>0);

    // for(int i=1; i<11; i++){
    //     sum+= (num*i);
    // }
    
    // printf("%d \n", sum);

    // int fact = 1;

    // while(num > 0){
    //     fact *= num;
    //     num--;
    // }

    // printf("%d \n", fact);

    bool isPrime = true;

    if(num == 0 || num ==1){
        isPrime = false;
    }

    for(int i=2; i<num; i++){
        if(num%i == 0){
            isPrime = false;
            break;
        }
    }

    if(isPrime){
        printf("Is a Prime \n");
    }
    else{
        printf("not a prime \n");
    }
}