#include<stdio.h>
int main()
{
	int num;
	scanf("%d",&num);
    int upper=0,lower=0;
	int i=0;
	while(i*i<=num)
	{
		lower=i*i;
		i++;
	}
	upper=i*i;
	if(num-lower<=upper-num)
	{ 
		printf("closest square root is %d",lower);
	}
	else{
	    printf("closest square root is %d",upper);
		}
	return 0;
}

	
