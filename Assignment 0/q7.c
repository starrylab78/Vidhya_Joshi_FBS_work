#include<stdio.h>
int main(){
	int total=190;
	int hours=total/60;
	int minutes=total%60;
	printf("Hours: %d and remaining minutes: %d ",hours ,minutes);
	return 0;
}