#include <stdio.h>
 
int main()
{ 

for( int i = 10;i>=0;i--){
	if(i == 5){
		continue;
	}
	printf("the value of i = %d \n",i);
}
  
    return 0;
}

