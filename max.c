#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter a value");
	scanf("%d%d%d",&a,&b,&c);
	int res;
	res=(a>b)?(a>c)?a:c:(b>c)?b:c;
	printf("%d",res);
	return 0;
}
