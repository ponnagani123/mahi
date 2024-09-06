#include<stdio.h>
#include<string.h>
#define max 10
int main()
{
	char str[]="hello, test gsjwhfde";
	char *p=strstr(str,"test");
	if(p!=NULL)
	{
	printf("found %ld\n",p-str);
	}
	else
	{
	  printf(" not found");

	}
	return 0;
}
