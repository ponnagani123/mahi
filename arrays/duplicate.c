#include<stdio.h>
int main()
{
    int n=5;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;i<n;i++)
		{
			if(arr[i]==arr[j])
			{
				for(int k=j;k<n;k++)
				{
					arr[k]=arr[k+1];
				}
				n--;
				j--;
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
	return 0;
}

