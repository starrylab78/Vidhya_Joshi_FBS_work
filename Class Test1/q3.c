#include<stdio.h>
int main(){
	int number;
	printf("Enter number : ");
	scanf("%d", &number);
	
	int last2=number%100;
	printf("Last 2 digits are : %d ",last2);
	return 0;
}