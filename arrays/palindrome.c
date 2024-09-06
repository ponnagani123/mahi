#include<stdio.h>
#define max 5
int main()
{
	int arr[max];
	for(int i=0;i<max;i++)
	{
		scanf("%d",&arr[i]);
	}
	int flag=0;
	for(int i=0;i<=max/2;i++)
	{
		if(arr[i]!=arr[max-i-1])
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		printf("it is not a palindrame");
	}
	else
	{
		printf("it is a palindrame");
	}
	return 0;
}


