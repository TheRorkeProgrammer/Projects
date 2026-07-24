#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <stdbool.h>

// Driver code
int main()
{
    // Declaring data types
    float valueOne;
    float valueTwo;
    char operator;
    float answer;

    // Entering calculation
    printf("Enter calculation:");
    scanf("%f %c %f", &valueOne, &operator, &valueTwo);

    // Selecting an operator
    switch (operator) {
        // division
    case '/':
        answer = valueOne / valueTwo;
        break;
        // Multiplication
    case '*':
        answer = valueOne * valueTwo;
        break;
        // Addition
    case '+':
        answer = valueOne + valueTwo;
        break;
        // Subtraction
    case '-':
        answer = valueOne - valueTwo;
        break;
        // XOR
    case '^':
        answer = pow(valueOne, valueTwo);
        break;
    case ' ':
        answer = sqrt(valueTwo);
        break;
    default:
        goto fail;
    }
    printf("%.9g %c %.9g = %.6g \n \n", valueOne, operator,
        valueTwo, answer);
    goto exit;
fail:
    printf("Fail.\n");
    printf("Please try again.\n");
exit:
    system("PAUSE");
    printf("Thank you for using the calculator");
    return 0;
}