#include<stdio.h>
int main()
{
	int a,b;
    float res;
	printf("enter the values : ");
	scanf("%d%d",&a,&b);
	int ch;
	printf("enter a choice 1.add\n2.sub\n3.*\n4./\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
		    printf("add is %d",a+b);
			break;
		case 2:
		    printf("sub is %d",a-b);
			break;
		case 3:
		    printf("* is %d",a*b);
			break;
		case 4:
		    printf("/ is %d",a/b);
			break;
		default:
		    printf("enter only 1,2,3,4");
	
	}
	return 0;
}


