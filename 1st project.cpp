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
    printf(" GUESS THE NUMBER - ");
    scanf("%d",&guess);
    no_of_guess++;
    	if(guess > randomNumber){
    		printf(" SORRY !!! \n PLZ ENTER LOWER NUMBER \n");
    		}
    		else if(guess < randomNumber){
    			printf(" SORRY !!! \n PLZ ENTER HIGHER NUMBER \n");
    				}
    			else {printf(" CONGRATS YOU WON !!! \n NUMBER OF ATTEMPTS %d",no_of_guess);
				}
		
		
	}while(guess!=randomNumber);
    

    return 0;
}

