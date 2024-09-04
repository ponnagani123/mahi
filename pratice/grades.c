#include<stdio.h>
int main()
{
	int marks;
	printf("enter marks 0-100");
	scanf("%d",&marks);
	if(marks>90 && marks<100)
	   printf(" the grade is A\n");
	else if(marks>80 && marks<89)
	   printf("the grade is B\n");
	else if(marks>70 && marks<79)
	   printf("the grade is C\n");
	else if(marks>60 && marks<69)
	   printf("the grade is B\n");
	else 
	   printf("below 60 F\n");
	return 0;
}
	
