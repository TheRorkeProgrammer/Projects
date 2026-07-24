/*A number generator that generates random numbers
between 0 and 1*/
/*Uses the Computers clock to provide a seed*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <stdbool.h>

int main() {
    //Function that will handle number generation
    srand(time(NULL));
    int i, N;

    double R;

    //Enter a random number
    printf("Enter the number of random number you want: ");
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        R = (double)rand() / RAND_MAX;
        printf(" %lf\n", R);
    }

    return 0;
}