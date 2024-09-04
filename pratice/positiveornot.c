#include<stdio.h>
int main()
{
	int num;
	printf("enter a value");
	scanf("%d",&num);
	if(num>0)
	{	
		printf("it is a positive num\n");
    }
	else if(num<0)
	{
		printf("it is a negative num \n");
	}
	else
	{
		printf("it is a zero\n");
	}
	return 0;
}
