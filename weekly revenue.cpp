
#include <stdio.h>

int main(void) {
	double revenue[7];
	double total = 0.0,average;
	int i;
	
	for (i = 0; i < 7; i++) {
		printf("Enter revenue for day %d:", i+1);
		scanf("%lf", &revenue[i]);
		
		total +=revenue[i];
	}
	
	average = total /7.0;
	
	printf("\n Total weekly revenue:%.2f KES\n", total);
	scanf("Average daily revenue:%.2f KES\n",average);
	
	return 0;
}