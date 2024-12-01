#include<stdio.h>
int sum(int,int);
int sum(int x,int y){
	//printf("the sum is %d\n",x+y);
	return x+y;
}
int main(){
	int a = 12,b = 15,c = 14, d = 45;
	int c1 =  sum(a,c);
	printf("%d\n",c1);
	int c2 =  sum(a,b);
	printf("%d\n",c2);
	int c3 =  sum(a,d);
	printf("%d\n",c3);
	 return 0;
}
