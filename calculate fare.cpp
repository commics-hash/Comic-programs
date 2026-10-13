/*
Author:Ongubo Stephen
Registration No:BCS-05-0536/2026
Description:Calculate Fare
*/

#include <stdio.h>

double calculated_fare(double distance) {
	return distance * 50.0;
}

int main(void){
	double distance, fare;
	
	printf("Enter distance in kilometres:");
	scanf("%lf",&distance);
	
	if (distance < 0) {
		printf("Invalid distance.\n");
	}else{
		fare = calculated_fare(distance);
		printf("Total fare: %.2f KES\n",fare);
	}
	
	return 0;
}










