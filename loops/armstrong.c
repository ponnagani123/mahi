#include<stdio.h>
#include<math.h>
int main()
{
	int num;
	scanf("%d",&num);
	int count=0;
	int temp=num;
	while(temp!=0)
	{
		temp/=10;
		++count;
	}
	int sum=0;
	int temp2=num;
	while(temp2!=0)
	{
	 	int rem=temp2%10;
		sum+=(int)pow(rem,count);
		temp2/=10;
	}
	if(sum==num)
	   printf("yes\n");
    else
	   printf("no");
	return 0;
}
