#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    //seeds the random number generator with current time
    srand(time(0));

    //generates a number between 1 and 100
    int i = (rand() % (100) + 1);

    int previousGuess = -1;
    int guess;
    int tries = 0;
    
    do{
        printf("Try and guess the number(%d): ", i);
        scanf("%d", &guess);

        if(guess > i) {
            printf("The number you entered (%d) was too high\n\n", guess);
        }
        else if(guess < i){
            printf("The number you entered (%d) was too low\n\n", guess);
        }
        
        if(!(guess == previousGuess)){
            tries++;
        }
        previousGuess = guess;
    }
    while(guess != i);
    printf("\nCongrats you found the number %d in %d tries!\n", i, tries);
    return 0;
}