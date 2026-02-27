/*
 * main.c
 *
 *  Created on: 26-Feb-2026
 *      Author: shraddha
 */

#include <stdio.h>

 int main() {
    float m1 = 78.5, m2 = 69.0, m3 = 88.5, m4 = 55.0, m5 = 72.5;
    float totalmarks, percentage;
    char grade;

    totalmarks = m1 + m2 + m3 + m4 + m5;
    percentage = totalmarks / 5.0f;


    grade = (percentage >= 75) ? 'A' :
            (percentage >= 60) ? 'B' :
            (percentage >= 45) ? 'C' : 'F';

    printf("Marks:\n");
    printf("Subject1: %.2f\nSubject2: %.2f\nSubject3: %.2f\nSubject4: %.2f\nSubject5: %.2f\n",
            m1, m2, m3, m4, m5);

    printf("Total: %.2f\n", totalmarks);
    printf("Percentage: %.2f\n", percentage);
    printf("Grade: %c\n", grade);

    return 0;
}
