#include<stdio.h>
#include<string.h>
int main()
{
	char str[50];
	fgets(str,50,stdin);
	fputs(str,stdout);
	char rev[50];
	char temp;
	int l;
	l=strlen(str);
	strncpy(rev,str,l+1);
	for(int i=0;i<l/2;i++)
	{
		temp=str[i];
		str[i]=str[l-i-1];
		str[l-i-1]=temp;
	}
	fputs(str,stdout);
	return 0;
}
