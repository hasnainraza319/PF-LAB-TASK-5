#include <stdio.h>

int main() {
    float percentage;
    char grade;
    printf("Enter the student's percentage: ");
    scanf("%f", &percentage);

if (percentage >= 90) {
        grade = 'A';
    } else if (percentage >= 80) {
        grade = 'B';
    } else if (percentage >= 70) {
        grade = 'C';
    } else if (percentage >= 60) {
        grade = 'D';
    } else {
        grade = 'F';
    }

    // Output wiil be 
    printf("The student's grade is: %c\n", grade);

    return 0;
}

