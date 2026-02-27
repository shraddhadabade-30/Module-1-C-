/*
 * main.c
 *
 *  Created on: 26-Feb-2026
 *      Author: shraddha
 */


#include <stdio.h>

int q1(){

	float  m1= 70.8, m2= 30, m3= 40, m4=90.8, m5=80.6 ;
	float totalmarks,  percentage;
	totalmarks = m1+m2+m3+m4+m5 ;

	char grade;

	percentage = totalmarks / 5.0f;

	if( percentage >= 75){
		grade = 'A';
	}
	else if( percentage >= 60){
		grade = 'B';
		}
	else if( percentage >= 45){
		grade = 'C';
		}

	else{
		grade = 'Fail';

	}

	 printf("Marks:\n");
	    printf("Subject1: %.2f\n", m1);
	    printf("Subject2: %.2f\n", m2);
	    printf("Subject3: %.2f\n", m3);
	    printf("Subject4: %.2f\n", m4);
	    printf("Subject5: %.2f\n", m5);

	    printf("Total: %.2f\n", totalmarks);
	    printf("Percentage: %.2f\n", percentage);
	    printf("Grade: %c\n", grade);


	return 0;



}

