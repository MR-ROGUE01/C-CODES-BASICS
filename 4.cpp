#include<stdio.h>

int main(){
	int marks1,marks2,marks3;
	printf("enter marks1: \n");
	scanf("%d",&marks1);
	printf("enter marks1: \n");
	scanf("%d",&marks2);
	printf("enter marks1: \n");
	scanf("%d",&marks3);
	printf("the marks are %d %d %d \n",marks1,marks2,marks3);
	if (marks1<33 || marks2<33 || marks3<33){
		printf(" you are failed due to less marks in individual subjects:");
	}
	else if((marks1 + marks2 + marks3)/3 < 40){
		printf("you are failed due to less percentage");
	}
	else printf("you are passed!");
	return 0;
}
