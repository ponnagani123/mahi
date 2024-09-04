#include<stdio.h>
int main()
{
	int num;
	printf("enter a num : ");
	scanf("%d",&num);
	int sum=0,rem;
	while(num!=0)
	{
		rem=num%10;
		sum+=rem;
		num/=10;
	}
	printf("%d",sum);
	return 0;
}


