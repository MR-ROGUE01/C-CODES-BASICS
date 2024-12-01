#include<stdio.h>
int f(int n){
	if(n==1 || n==2){
		return n-1;
	}
	return f(n-1)+f(n-2); //x mass of body
}
int main(){
	int x = 10 ; // x mass of body

	f(x);
	printf("the fof is %f \n",f(x));
	return 0;
}
