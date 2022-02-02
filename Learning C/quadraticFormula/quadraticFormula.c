#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
	Currently outputting -NAN for both results
*/

//You can define methods up here so that the main function can use them, even though the rest of the function is defined below.
double* quadraticFormula(double a, double b, double c);

int main(void){
	double a;
	double b;
	double c;
	printf("Please type the variables a, b, and c: ");
	scanf("\n%lf%lf%lf", &a, &b, &c);
	double* results = quadraticFormula(a, b, c);
	printf("Result 1: %lf\nResult 2: %lf\n", results[0], results[1]);
	return 0;
}

//returns double* but its actually an array
double* quadraticFormula(double a, double b, double c){
	double resultA;
	double resultB;

	//REMEMBER when compiling, add -lm to link math
	resultA = (-b + (sqrt(pow(b, 2) - (4*a*c))))/(2*a);
	resultB = (-b - (sqrt(pow(b, 2) - (4*a*c))))/(2*a);
	
	//To declare an array, you need to make a pointer to it and calloc it with calloc(length, sizeof(dataType));
	double* results = calloc(2, sizeof(double));

	//Assigning to array as usual
	results[0] = resultA;
	results[1] = resultB;
	return results;
}