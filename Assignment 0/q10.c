#include<stdio.h>
int main(){
	int sub1=45;
	int sub2=50;
	int sub3=43;
	int sub4=37;
	int sub5=42;
	float total=sub1+sub2+sub3+sub4+sub5;
	float percentage=(total/250.0)*100;
	printf("Total marks= %f\n Percentage= %f\n",total ,percentage);
	return 0;
}