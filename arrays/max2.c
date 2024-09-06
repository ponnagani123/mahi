#include<stdio.h>
#include<limits.h>
#define max 5
int main()
{
	int arr[max];
	int max1=INT_MIN,max2=INT_MIN;
	for(int i=0;i<max;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<max;i++)
	{
		if(arr[i]>max1)
		{	
			max2=max1;
			max1=arr[i];
		}
		else if(arr[i]>max2 && max1>arr[i])
		{
			max2=arr[i];
		}
	}
	printf("2nd max is %d",max2);
	return 0;
}


