#include<stdio.h>
int main()
{
	float w,h;
	scanf("%f%f",&w,&h);
	float bmi;
	bmi=w/(w*h);
	printf("bmi of %f height and %f weight is %f",h,w,bmi);
	return 0;
}
