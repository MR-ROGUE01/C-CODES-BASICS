#include<stdio.h>
int factorial(int n){
return factorial(n-1)*n;
}
int main(){
	int a = 7;
	printf("the factorial of %d is %d \n",a,factorial(a));
	return 0;
}
