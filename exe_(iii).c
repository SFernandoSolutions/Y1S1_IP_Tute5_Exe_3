// i) Write a C program to enter 4 module marks of a student from the keyboard and
// display the total of all four module marks.
// ii) Modify the program written in i) above to enter 4 module marks of 3 students and
// display their total marks.
// iii) Display the student with the highest total mark.

#include <stdio.h>

int main() {
    int numStudents = 3;
    int numModules = 4;
    int highestTotal = -1;
    int highestStudent = -1;
    int i, j;

    for (i = 1; i<=numStudents; i++) {
        int totalMarks = 0;
        printf("Enter 4 module marks for Student %d:\n", i);

        for (j = 1; j <= numModules; j++) {
            int mark;
            printf("Enter mark for Module %d: ", j);
            scanf("%d", &mark);
            totalMarks += mark;
        }

        printf("Total marks for Student %d: %d\n", i, totalMarks);

        if (totalMarks > highestTotal) {
            highestTotal = totalMarks;
            highestStudent = i;
        }
    }

    printf("Student %d has the highest total marks: %d\n", highestStudent, highestTotal);

    return 0;
}
