/* area of 
and circumference 
of circle*/
#include<stdio.h>
#define PI 3.14
int main()
{
 	int r;
	printf("enter a value");
	scanf("%d",&r);
	float area=PI*r*r;
	float circumference=2*PI*r;
	printf("the area of circle is %f and circumference is %f",area,circumference);
	return 0;
}
