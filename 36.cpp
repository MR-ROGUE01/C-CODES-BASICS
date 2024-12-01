#include<stdio.h>
 int feb( int n){
 	if(n==0 || n==1){
 		return n-1;}
 		return feb(n-1) + feb(n-2);
 		
 }
 int main(){
 	int n = 5;
 	printf("the feb series for %d is %d",n,feb(n));
 	return 0;
 }
