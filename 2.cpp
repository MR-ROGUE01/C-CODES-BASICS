#include<stdio.h>
#include<stdlib.h>

int main(){
	int  a,x,y;
	printf("Enter two number:");
	scanf("%d %d",&x,&y);
	printf("ENTER YOUR CHOICE - ");
	scanf("%d",&a);
	switch(a){
		case 1:
			{
			int add=x+y;
			printf("Addition of %d and %d is:%d",x,y,add);
			break;
		}
		case 2:
			{
			
			int sub=x-y;
			printf("Sub of %d and %d is:%d",x,y,sub);
			break;
		    }
		case 3:
			{
				int multiply=x*y;
				printf("multiplication of %d and %d is:%d",x,y,multiply);
				break;
			}
		case 4:{
			float division=(float)x/(float)y;
			printf("division of %d and %d is :%f",x,y,division);
			
			break;
		}
		case 5:
			{
				exit(0);
			}
	    default:
	    	{
	    		printf("Invalid choice");
			}
	}
	
	return 0;
}
