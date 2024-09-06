#include<stdio.h>
#define max 5
int main()
{ 
	int arr[max];
	printf("enter values : ");
	for(int i=0;i<max;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("reverse : ");
	int s=0,end=max-1,temp;
	while(s<=end)
	{
		temp=arr[s];
		arr[s]=arr[end];
		arr[end]=temp;
		s++;
		end--;
	}
	for(int i=0;i<max;i++)
	{
		printf("%d",arr[i]);
	}
		
	return 0;
}
