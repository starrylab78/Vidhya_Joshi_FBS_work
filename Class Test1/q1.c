#include<stdio.h>
int main(){
	int hours,minutes,seconds;
	printf("Enter hours : ");
	scanf("%d", &hours);
	printf("Enter minutes: ");
	scanf("%d", &minutes);
	printf("Enter seconds: ");
	scanf("%d", &seconds);
	int totalsec=(hours*3600)+(minutes*60)+seconds;
	printf("Total seconds= %d", totalsec);
	return 0;
}