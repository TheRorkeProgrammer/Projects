/*Grade c \nalculator to check the grade of a student based on
the marks*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <stdbool.h>

int main() {

    //Marks data type
    int marks;

    printf("\n========Grade Calculator========\n");
    printf("\n Grades List \n");
    printf("A+ - Excellent\n"
        "A - Vey Good \n"
        "B - Well Done\n"
        "C -  Good \n"
        "D - Okay \n"
        "F - Failed \n");


    //Getting marks from user
    printf("Enter your marks: ");
    scanf("%d", &marks);

    //Wrong entry
    if (marks < 0 || marks > 100) {
        printf("Invalid.\n Enter Between 0 and 100\n");

        //Calculating grade depending on the mark given by user
    }
    else if (marks < 50) {
        printf("Grade F \n");
    }
    else if (marks >= 50 && marks < 60) {
        printf("Grade D \n");
    }
    else if (marks >= 60 && marks < 70) {
        printf("Grade C \n");
    }
    else if (marks >= 70 && marks < 80) {
        printf("Grade B \n");
    }
    else if (marks >= 80 && marks < 90) {
        printf("Grade A \n");
    }
    else {
        printf("Grade A \n+");
    }

    system("PAUSE");

    return 0;
}