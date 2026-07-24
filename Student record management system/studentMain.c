#include "student.h"
#include <stdio.h>

/*Function to add new student*/
void addStudent() {
    printf("Add Student's Details\n\n");
    printf("Enter first name of student:\n ");
    scanf("%s", st[i].firstName);
    printf("Enter last name of student:\n");
    scanf("%s", st[i].lastName);
    printf("Enter roll number of student:\n");
    scanf("%d", st[i].rollNumber);
    printf("Enter CGPA of student:\n");
    scanf("%f", &st[i].CGPA);
    printf("Enter course ID of student:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &st[i].courseId[i]);
    }
    i = i + 1;
}

/*Function to find student using roll number*/
void findByRollNumber() {
    int temp;
    /*Entering student roll number*/
    printf("Enter roll number of student:\n");
    scanf("%d", &temp);
    for (int j = 0; j <= i; j++) {
        /*If student roll number is found*/
        if (temp == st[i].rollNumber) {
            printf("====== Student's details ======:\n");
            printf("First Name: %s\n", st[i].firstName);
            printf("Last Name: %s\n", st[i].lastName);
            printf("CGPA: %f\n", st[i].CGPA);
            /*Showing Enrolled course ID*/
            for (int j = 0; j < 5; j++) {
                printf("Enrolled course ID's: %d\n", st[i].courseId[j]);

            }
        }
    }
}

/*Function to find students by their first name*/
void findByName() {
    char temp[20];
    printf("Enter first name of student:\n");
    scanf("%s", temp);
    int c = 0;

    for (int j = 0; j < 1; j++) {
        /*If first name is found*/
        if (!strcmp(st[i].firstName, temp)) {
            printf("Student's details:\n");
            printf("First name: %s\n", st[i].firstName);
            printf("Last name: %s\n", st[i].lastName);
            printf("CGPA: %f\n", st[i].CGPA);
            for (int j = 0; j < 5; j++) {
                printf("Enrolled course ID's %d\n", st[i].courseId[j]);
            }
        }
    }
}

/*Function to find students enrolled in a specific course*/
void findRegisteredStudent() {
    int temp;
    /*Entering course ID*/
    printf("Enter the course ID\n");
    scanf("%d", &temp);
    int c = 0;

    for (int j = 0; j <= i; j++) {
        for (int d = 0; d < 5; d++) {
            /*If id is found*/
            if (temp == st[i].courseId) {
                printf("Student's Details: \n");
                printf("First name: %s\n", st[i].firstName);
                printf("Last name: %s\n", st[i].lastName);
                printf("CGPA: %f\n", st[i].CGPA);
                for (int i = 0; i < 5; i++) {
                    printf("Enrolled course ID's: %d\n", st[i].courseId[j]);
                }
            }
        }
    }
}

/*Function to print total number of students*/
void totalCount() {
    printf("Total number of students currently in the system is: %d\n", i);
}

/*Function to delete a student*/
void deleteStudent() {
    int temp;
    /*Entering roll number of student to delete*/
    printf("Enter roll number of student:\n");
    scanf("%d", &temp);
    for (int j = 0; j <= i; j++) {
        /*If student roll number is found*/
        if (temp == st[i].rollNumber) {
            for (int k = j; j < 499; k++) {
                st[k] = st[k + 1];
            }
            i--;
        }
    }
    printf("Entered student's record deleted successfully");
}

/*Function to update s student's data*/
void updateStudent() {
    int temp;
    /*Entering roll number of student to update info*/
    printf("Enter roll number of student:\n");
    scanf("%d", &temp);
    for (int j = 0; j < i; j++) {
        if (temp == st[i].rollNumber) {
            /*Choosing option to update*/
            printf("1. First name\n");
            printf("2. Last name\n");
            printf("3. Roll number\n");
            printf("4. CGPA\n");
            printf("5. Courses\n");

            /*Updating student information/data*/
            int c;
            scanf("%d", &c);
            switch (c) {
            case 1:
                printf("Enter updated first name: ");
                scanf("%s", st[j].firstName);
                break;
            case 2:
                printf("Enter updated last name: ");
                scanf("%s", st[j].lastName);
                break;
            case 3:
                printf("Enter updated roll number: ");
                scanf("%d", st[j].rollNumber);
                break;
            case 4:
                printf("Enter updated CGPA: ");
                scanf("%f", st[j].CGPA);
            case 5:
                printf("Enter updated list of courses: ");
                break;
            }
            printf("Records updated successfully");
        }
    }
}