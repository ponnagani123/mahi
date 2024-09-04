#include<stdio.h>
int main()
{
	float w,h;
	printf("enter values: ");
	scanf("%f%f",&w,&h);
	float bmi;
	bmi=w/(h*h);
	printf("bmi is %f",bmi);
	if(bmi<18.5)
	{
		printf("Underweight");
	}
	else if(bmi>=18.5 && bmi<=24.9)
	{
		printf("Normal weight");
	}
	else if(bmi>=25 && bmi<=29.9)
	{
		printf("Overweight");
	}
	else if(bmi>=30)
	{
	    printf("Obesity");
	}

return 0;
}
