/*
Author:Ongubo Stephen
Registration No:BCS-05-0536/2026
Description:ATM Withdrawals
*/

#include <stdio.h>

int main(void) {
	double balance, amount;
	
	printf("Enter account balance:");
	scanf("%lf",&balance);
	
	while(balance >0) {
		printf("Enter amount to withdraw:");
		scanf("%lf",&amount);
		
		if(amount <= 0) {
			printf("Enter a positive amount.\n");
		} else if (amount > balance) {
			printf("Insufficient balance,\n");
		} else {
			balance -= amount;
			printf("Remaining balance: %.2f KES\n",balance);
		}
      }
      
      printf("Account balance is zero or negative.\n");
      
      return 0;
}