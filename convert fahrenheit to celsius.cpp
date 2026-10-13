/*
Author:Ongubo Stephen
Registration No:BCS-05-0536/2026
Description:Convert Fahrenheit to Celsius
*/

#include <stdio.h>

double convert_to_celsius(double fahrenheit){
	return (fahrenheit - 32.0) * 5.0/9.0;
}

int main(void) {
	double fahrenheit, celsius;
	
	printf("Enter temperature in fahrenheit:");
	scanf("%lf",&fahrenheit);
	
	celsius = convert_to_celsius(fahrenheit);
	
	printf("Temperature in Celsius: %.2f C\n",celsius);
	
	return 0;
}
























