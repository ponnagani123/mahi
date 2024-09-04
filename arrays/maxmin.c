#include<stdio.h>
#define max 5
int main()
{
	int arr[max];
	for(int i=0;i<max;i++)
	{
		scanf("%d",&arr[i]);
	}
	int min=arr[0];
	for(int i=1;i<max;i++)
	{
		if(min>arr[i])
		{
			min=arr[i];
		}
	}
	int max1=0;
	for(int i=0;i<max;i++)
	{
		if(arr[i]>max1)
		{
			max1=arr[i];
		}
	}
	printf("max is %d",max1);
	printf("min is %d",min);
	return 0;
}
		
