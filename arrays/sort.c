#include<stdio.h>
#define max 5
int main()
{
	int arr[max];
	for(int i=0;i<max;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("sorting the elements:");
	int temp;
	for(int i=0;i<max;i++)
	{
		for(int j=i+1;j<max;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	for(int i=0;i<max;i++)
	{
		printf("%d",arr[i]);
	}
	return 0;
}
