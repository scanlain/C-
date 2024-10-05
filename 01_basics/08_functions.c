#include<stdio.h>

int add(int , int);
void goodMorning();
void goodAfternoon();
void goodNight();

void main(){

    int a, b;

    // printf("Enter the a value: ");
    // scanf("%d", &a);

    // printf("Enter the b value : ");
    // scanf("%d", &b);

    // int ans = add(a, b);
    // printf("addition is : %d \n", ans);

    goodMorning();
    goodAfternoon();
    goodNight();

}

void goodMorning(){
    printf("Good Morning \n");
}

void goodAfternoon(){
    printf("Good Afternoon \n");
}

void goodNight(){
    printf("Good Night \n");
}

int add(int a, int b){
    return a+b;
}