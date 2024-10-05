#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main(){
    srand(time(0));
    int correct_number = rand()%100 + 1;
    // printf("%d \n", n);

    int user_number=0, count=0;


    do
    {
        printf("Guess the number(between 1 and 100): ");
        scanf("%d", &user_number);

        if(user_number > correct_number){
            printf("Correct number is lesser than guessed number!! \n\n");
            
        }
        else if(user_number < correct_number){
            printf("Correct number is greator than guessed number!! \n\n");
            
        }
        count++;

    } while (user_number != correct_number);


    printf("You guessed it right in %d chances \n", count);
    
}