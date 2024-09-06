#include<stdio.h>
#define max 5
int main()
{
	int arr[max];
	for(int i=0;i<max;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("with sort method");
	int temp;
	for(int i=0;i<max;i++)
	{
		for(int j=0;j<max-i-1;j++)
	    {
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	for(int i=0;i<max;i++)
	{
		printf("%d",arr[i]);
	}
	return 0;
}



