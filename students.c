#include <stdio.h>

// Structure to store student details
struct Student {
    int rollNumber;
    char name[50];
    float physics ;
    float chemistry ;
    float maths ;
    float total ;
};

int main() {
    // Declaring an array of structures for 100 students
    struct Student students[100];
    int numStudents;

    // Prompting the user to enter the number of students
    printf("Enter the number of students (max 100): ");
    scanf("%d", &numStudents);

    // Inputting details for each student
    for (int i = 0; i < numStudents; i++) {
        printf("\nStudent %d details:\n", i + 1);
        printf("Enter roll number: ");
        scanf("%d", &students[i].rollNumber);
        printf("Enter name: ");
        scanf("%s", students[i].name);
        printf("Enter marks in Physics: ");
        scanf("%f", &students[i].physics );
        printf("Enter marks in Chemistry: ");
        scanf("%f", &students[i].chemistry );
        printf("Enter marks in Maths: ");
        scanf("%f", &students[i].maths );

        // Calculating total marks
        students[i].total  = students[i].physics  + students[i].chemistry  + students[i].maths ;
    }

    // Displaying details of each student
    printf("\nStudent details:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Roll Number: %d\n", students[i].rollNumber);
        printf("Name: %s\n", students[i].name);
        printf("Physics Marks: %.2f\n", students[i].physics );
        printf("Chemistry Marks: %.2f\n", students[i].chemistry );
        printf("Maths Marks: %.2f\n", students[i].maths );
        printf("Total Marks: %.2f\n", students[i].total );
    }

    return 0;
}
