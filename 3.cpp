#include<stdio.h>

int main(){
	float a,b,c;
	float pass;
	printf("enter the marks of three subjects-");
	scanf("%f %f %f",&a,&b,&c);
	if (a>=33){
		printf("pass in a \n ");
		}
		else{
		printf("fail in a \n");
	}
	if (b>=33){
		printf("pass in b \n");
		}
		else{
		
		 printf("fail in b \n");
		 }
	
	if (c>=33){
		printf("pass in c \n");
		}
		else{
	
		 printf("fail in c \n");
		 
		}
		pass = ((a+b+c)/300)*100 ;
	
		printf("the student is pass %f",pass);
			
	return 0;
}
