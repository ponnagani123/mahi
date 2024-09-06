#include<stdio.h>
#include<string.h>
#define size 50
int main()
{
	char ch[size];
	printf("enter a string : ");
	fgets(ch,size,stdin);
	int len=strlen(ch);
	if(ch[len-1]=='\n')
	{
		ch[len-1]='\0';
	}

	printf("string is %s",ch);
	return 0;
}

