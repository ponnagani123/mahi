#include<stdio.h>
#include<math.h>
int main()
{
	int num;
	scanf("%d",&num);
	int square;
	square=num*num;
	int temp=num;
	int count=0;
	while(temp>0)
	{
		temp/=10;
		count+=1;
	}
	int last=square%(int)pow(10,count);
	if(last==num)
	{	printf("yes\n");
	}
	else{
	   printf("no");
	   }
	printf("it is");
	return 0;
}

