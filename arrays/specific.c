#include<stdio.h>
#define max 5
int main()
{
	int arr[max];
	for(int i=0;i<max;i++)
	{
		scanf("%d",&arr[i]);
	}
	int sp;
	printf("enter a num :");
	scanf("%d",&sp);
	for(int i=0;i<max;i++)
	{
		if(arr[i]==sp)
		{
			printf("found and index is %d\n",i);
			break;
		}
	}
	return 0;
}

