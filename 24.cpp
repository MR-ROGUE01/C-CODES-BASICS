#include<stdio.h>
int subtract();
int subtract(int x,int y){
	printf("the subtract is = %d\n",x-y);
}
int main(){
	int x,y;
	printf("enter the value of x = ");
	scanf("%d",&x);
	printf("enter the value of y = ");
	scanf("%d",&y);
	subtract(x,y);
	return 0;
	
}
