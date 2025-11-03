#include<stdio.h>
int main(){
	int a=3;
	int b=6;
	int c=a;
	a=b;
	b=c;
	printf("a=%d , b=%d",a,b);
	return 0;
}
