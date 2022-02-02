#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int arrayContains(int* array, int num);
int* addToArray(int* array, int numToAdd);

int main(void){
    //seeds the random number generator with current time
    srand(time(0));

    //generates a number between 1 and 100
    int i = (rand() % (100) + 1);

    int *guesses = calloc(1, sizeof(int));
    int guess = -1;
    int tries = 0;
    
    while(guess != i) {
        printf("Try and guess the number(%d): ", i);
        scanf("%d", &guess);

        if(guess > i) {
            printf("The number you entered (%d) was too high\n\n", guess);
        }
        else if(guess < i){
            printf("The number you entered (%d) was too low\n\n", guess);
        }
        
        if(!arrayContains(guesses, guess)){
            guesses = addToArray(guesses, guess);
            tries++;
        }
    }
    printf("\nCongrats you found the number %d in %d tries!\n", i, tries);
    free(guesses);
    return 0;
}

int arrayContains(int* array, int num){
    for (size_t i = 0; i < sizeof(array)-1; i++)
    {
        if(array[i] == num)
            return 1;
    }
    return 0;
}

int* addToArray(int* array, int numToAdd){
    array = realloc(array, (sizeof(array) + 1) * sizeof(int));
    array[sizeof(array)-1] = numToAdd;
    return array;
}