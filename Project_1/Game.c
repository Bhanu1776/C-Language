// From line 3 to 10 is used to generate random numbers !

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int number;
    srand(time(0));
    number=rand()%100 + 1; // Generates a random number between 1 and 100 ..
    // printf("The number is %d\n", number);
    // Keep running the loop until the number is guessed ..
    int input, nguesses=1;
    do{
        printf("Guess the number between 1 to 100 = ");
        scanf("%d", &input);
        if(input>number){
            printf("Your guessed number is high ! \n");
        }
        else if(number==input){
            printf("You Guessed right in %d attempts !!",nguesses);
            break;
        }
        else{
            printf("Your guessed number is low ! \n");
        }
        nguesses++;
    }while(input>number || input<number);
    
    return 0;
}