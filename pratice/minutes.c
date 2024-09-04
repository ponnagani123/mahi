#include<stdio.h>
#define min 60
int main()
{
	int h,m;
	scanf("%d",&h);
	scanf("%d",&m);
	int totalm;
	totalm=h*min+m;
	printf("total minutes is %d",totalm);
	return 0;
}

