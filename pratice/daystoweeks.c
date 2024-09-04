#include<stdio.h>
int main()
{
	int days;
	printf("enter daysb :");
	scanf("%d",&days);
	int weeks=days/7;
	int rem=days%7;
	printf("%d days are %d weeks,%d days",days,weeks,rem);
	return 0;



}
