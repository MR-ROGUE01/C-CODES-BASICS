#include<stdio.h>
int main(){
	int n;
	printf("enter number - ");
	scanf("%d",&n);
	for (int i=10; i>0;i--){
		printf("%d x %d = %d \n",n,i,i*n);
	}
	return 0;
}
