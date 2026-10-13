/*
Author:Ongubo Stephen
Registration No:BCS-05-0536/2026
Description:Password system
*/

#include <stdio.h>

int main(void) {
	int password;
	
	do{
		printf("Enter password:");
		scanf("%d",&password);
		
		if(password != 1234) {
			printf("Incorrect password. Try again.\n");
		}
		
	}while (password != 1234);
	
	printf("Access Granted\n");
	
	return 0;
}








