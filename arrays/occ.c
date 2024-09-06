#include<stdio.h>
#define max 5

int main()
{
	int arr[max];
	int frq[max];
	for(int i=0;i<max;i++)
	{
		scanf("%d",&arr[i]);
		frq[i]=-1;
	}
	for(int i=0;i<max;i++)
	{
		int count=1;
		for(int j=i+1;j<max;j++)
		{
			if(arr[i]==arr[j])
			{
				count++;
				frq[j]=0;

			}
		}
		if(frq[i]!=0)
		{
			frq[i]=count;
		}
		

	}
	for(int i=0;i<max;i++)
	{
		if(frq[i]!=0)
		{
			printf("count of %d num is %d\n",arr[i],frq[i]);
		}
	}
	return 0;
}
