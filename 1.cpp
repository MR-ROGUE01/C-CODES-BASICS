#include<stdio.h>

int main(){
	int age;
	printf("ENTER AGE \n");
	scanf("%d",&age);
    if(age>0 && age<10){
    	printf("i am child");
    	}
    	else if(age>10 && age<20){
    		printf("i am teen");
    	}
		else {
		printf("i am adult");
		}
	
	
}
