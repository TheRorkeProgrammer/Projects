/*Number Guessing Game where the user is supposed to
guess a number between 0 and n in a maximum of 10 attempts*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <stdbool.h>

/*Function that generates a number between the range [1, N]
and checks if the generated number is the same as the guessed number*/
void guess(int N) {
    int number, guess, numberofguess = 0;

    //Seed random number generator
    srand(time(NULL));

    //Generating a random number
    number = rand() % N;

    //Guessing a number between thr range
    printf("\nGuess a number between 1 and %d\n", N);

    //Looping through until user guesses the correct number
    do {
        //User losses game if there are no attempts left   
        if (numberofguess > 9) {
            printf("\nYou Lose!\n");
            break;
        }

        //Getting input by user
        scanf("%d", &guess);

        //When user guesses higher than the actual number
        if (guess > number) {
            printf("Lower Number Please!\n");
            numberofguess++;
        }
        //When user guesses lower than the actual number
        else if (number > guess) {
            printf("Higher number please!\n");
            numberofguess++;
        }

        //Printing number of times user has taken to guess the number
        else {
            printf("You guessed the number in %d attempts!\n", numberofguess);
            printf("You Win!\n");
        }
    } while (guess != number);
}

//Main logic - Driver code
int main() {
    int N = 100;

    printf("\n===========Number Guessing Game==========\n");
    printf("\nAttempts You Have Left: 9\n");
    //Function call
    guess(N);

    system("PAUSE");

    return 0;
}