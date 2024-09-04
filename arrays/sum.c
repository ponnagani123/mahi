#include<stdio.h>
#define MAX 5
int main()
{
	int arr[MAX];
	for(int i=0;i<MAX;i++)
	{
		scanf("%d",&arr[i]);
	}
	int sum=0;
	float avg;
	for(int i=0;i<MAX;i++)
	{
		sum+=arr[i];
	}
	avg=sum/MAX;
	printf("sum is %d and avg %f ",sum,avg);
	return 0;
}

