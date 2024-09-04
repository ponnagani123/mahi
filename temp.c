/* conversion between 
celsius to fahrenheit*/
#include<stdio.h>
int main()
{
	float celsius;
	printf("enter temperature : ");
	scanf("%f",&celsius);
	float fahrenheit;
	fahrenheit=(celsius*9/5)+32;
	printf("the %f cesius in fahrenheit is %f",celsius,fahrenheit);
	return 0;
}
