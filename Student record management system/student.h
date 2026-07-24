#ifndef STUDENT_H
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

/*Keeping track of the number of students*/
int i = 0;

/*Student structure*/
struct StudentInfo {
    char firstName[20];
    char lastName[20];
    int rollNumber[20];
    float CGPA;
    int courseId[10];
} st[500];

/*Function prototypes*/
void addStudent();
void findByRollNumber();
void findByName();
void findRegisteredStudent();
void totalCount();
void deleteStudent();
void updateStudent();

#endif // !STUDENT_H