/*Main program execution*/
#include "studentMain.c"
#include <stdio.h>

/*Main entry point*/
int main() {
    int taskToPerform;
    while (1) {
        printf("Enter task that you want to perform\n");
        printf("1. Add new Student Detail\n");
        printf("2. Find details of student using roll number\n");
        printf("3. Find details of student using first name\n");
        printf("4. Find the details of student using course Id\n");
        printf("5. Find total number students\n");
        printf("6. Delete the details of a student\n");
        printf("7. Update the details of a student\n");
        printf("8. Exit\n");
        scanf("%d", &taskToPerform);

        switch (taskToPerform) {
        case 1:
            addStudent();
            break;
        case 2:
            findByRollNumber();
            break;
        case 3:
            findByName();
            break;
        case 4:
            findRegisteredStudent();
            break;
        case 5:
            totalCount();
            break;
        case 6:
            deleteStudent();
            break;
        case 7:
            updateStudent();
            break;
        case 8:
            exit(0);
            printf("Thanks for using the SMS. Goodbye!\n");
            break;
        default:
            printf("Thanks for using the SMS. Goodbye!\n");
            exit(0);
        }
    }
    return 0;
}