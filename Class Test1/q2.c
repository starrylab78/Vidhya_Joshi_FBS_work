#include<stdio.h>
int main(){
	int leap;

	printf("enter year: ");
	scanf("%d" , &leap);
	
	if((leap%4==0 && leap%100!=0 )||leap%400==0){
		printf("Its a leap year");
	}else{
		printf("Not a leap year");
	}
}