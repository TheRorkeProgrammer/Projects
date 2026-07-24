#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    printf("\n======== Grade Calculator ========\n");
    printf("Grades List\n");
    printf("Grade A+\n");
    printf("Grade A\n");
    printf("Grade B\n");
    printf("Grade C\n");
    printf("Grade D\n");
    printf("Grade F\n");

    int mark;
    printf("Enter the grade to got in the test:");
    scanf("%d", &mark);

    /*Rating the marks based on the mark given*/
    if (mark <= 50)
    {
        printf("Grade F: Failed");
    }
    else if (mark <= 60)
    {
        printf("Grade D");
    }
    else if (mark <= 70)
    {
        printf("Grade B");
    }
    else if (mark <= 80)
    {
        printf("Grade A");
    }
    else if (mark <= 90)
    {
        printf("Grade A++");
    }
    else
    {
        printf("Please enter your mark");
    }
    return 0;
    system("PAUSE");
}