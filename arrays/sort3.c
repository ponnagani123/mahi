#include<stdio.h>
int main()
{
	int m,n;
	scanf("%d",&m);
	int arr[m];
	for(int i=0;i<m;i++)
	{
		scanf("%d",&arr[i]);
	}
    printf("enter 2nd array :");
	scanf("%d",&n);
	int arr2[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr2[i]);
	}
	printf("total :");
	int total=m+n;
	int arr3[total];
	for(int i=0;i<m;i++)
	{
		arr3[i]=arr[i];
	}
	for(int i=0;i<n;i++)
	{
		arr3[i+m]=arr2[i];
	}
	for(int i=0;i<total;i++)
	{
		printf("%d ",arr3[i]);
	}
	return 0;
}


	

