/*
Author:Ongubo Stephen
Registration No:BCS-05-0536/2026
Description:Number guessing game
*/

  #include <stdio.h>
  #include <stdlib.h>
  # include <time.h>
  
  int main(void) {
	  int secret, guess, attempts = 0;
	  
	  srand((unsigned int) time(NULL));
	  secret = rand() % 20 + 1;
	  
	  do {
		  printf("Guess a number between 1 and 20:");
		  scanf("%d",&guess);
		  
		  attempts++;
		  
		  if(guess > secret) {
			  printf("Too high!\n");
		  }else if (guess < secret){
		  printf("Too low!\n");
		  } else {
			  printf("Congratulations!\n");
			  printf("Total attempts: %d\n",attempts);
		  }
		  
	  }while(guess != secret);
	  
	  return 0;
  }









