#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter values : ");
	scanf("%d%d%d",&a,&b,&c);
	if((a>b)&&(a>c))
	   printf("max is a");
	else if((b>a)&&(b>c))
	   printf("max is b");
	else
	   printf("max is c");
    return 0;
}
