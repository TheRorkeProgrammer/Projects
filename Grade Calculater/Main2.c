/*Using Switch statement*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <stdbool.h>

int main() {
    int marks;

    printf("\n========Grade Calculator========\n");
    printf("\n Grades List \n");
    printf("A+ - Excellent\n"
        "A - Vey Good \n"
        "B - Well Done\n"
        "C -  Good \n"
        "D - Okay \n"
        "F - Failed \n");

    //Getting input from user
    printf("What was your score:\n");
    scanf("%d", &marks);

    switch (marks) {
    case 0 ... 49:
        printf("F\n");
        break;
    case 50 ... 60:
        printf("D\n");
        break;
    case 61 ... 70:
        printf("B\n");
        break;
    case 71 ... 80:
        printf("C\n");
        break;
    case 81 ... 90:
        printf("A\n");
        break;
    case 91 ... 100:
        printf("A+\n");
        break;
    default:
        printf("Invalid Choice.\n Please try again\n");
        break;
    }

    return 0;
}