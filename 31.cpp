#include<stdio.h>
float average(int x, int y , int z){
	
	return (x+y+z)/3.0;
}
int main(){
	int a = 10,b = 25 ,c = 14;
	average(a,b,c);
	printf("the average is %f \n ",average(a,b,c));
	return 0;
	
}
