#include<stdio.h>
int f(int n){
	if(n==1 || n==2){
		return n-1;
	}
	return f(n-1)+f(n-2); //x mass of body
}
int main(){
	int n = 4 ; // x mass of body
	printf("the f series of %d is %d \n ",n,f(n));
	return 0;
}
