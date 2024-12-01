#include <stdio.h>
#include <stdlib.h> // for rand() and srand()
#include <time.h>   // for time()

int main() {
    srand(time(NULL));
    int randomNumber = (rand() % 100) + 1;
    // printf("Random number between 1 and 100: %d\n", randomNumber);
    int no_of_guess=0;
    int guess;
   
    do{
    printf("enter your guess number - \n");
    scanf("%d",&guess);
    no_of_guess++;
    	if(guess > randomNumber){
    		printf("your guess is greater then the number \n");
    		}
    		else if(guess < randomNumber){
    			printf("your guess is lower then the number \n");
    				}
    			else {printf("you guessed right no \n no of attempts %d",no_of_guess);
				}
		
		
	}while(guess!=randomNumber);
    

    return 0;
}

