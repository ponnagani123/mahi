#include<stdio.h>
int main()
{
	int num;
	scanf("%d",&num);
	int square;
	square=num*num;
	int temp=num;
	while(temp>0)
	{
		if(temp%10!=square%10)
		    printf("no");
		square/=10;
		temp/=10;
	}
	printf("it is");
	return 0;
}

