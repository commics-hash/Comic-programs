/*
Author:Ongubo Stephen
Registration No:BCS-05-0536/2026
Description:Calculate electrical bill
*/

#include <stdio.h>

double calculateElectricalBill(int units) {
	double bill;
	
	if(units <0){
		return -1;
	}else if (units <= 100){
		bill = units * 10.0;
	}else if (units <= 200){
		bill = (100*10.0)+((units - 100) *15.0);
	}else{
		bill = (100 * 100) + (100 * 15.0);
	}
	
	return bill;
}
int main(void) {
	int units;
	double bill;
	
	printf("Enter electricity units consumed:");
	scanf("%d",&units);
	
	bill = calculateElectricalBill(units);
	
	if(bill < 0) {
		printf("Invalid units.\n");
	}else{
		printf("Electricity bill: %.2f KES\n",bill);
	}
	
	return 0;
}







