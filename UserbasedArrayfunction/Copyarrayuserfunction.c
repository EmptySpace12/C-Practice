#include<stdio.h>
//copying using userbased function//
char* myfuncopy(char*,char*);
void main()
{
	int i,n;
	char *c;
	char a[100];
	char b[100];
	printf("Enter Your String Here:");
	scanf("%s",b);
	c=myfuncopy(a,b);
	printf("Your New String is:%s",c);
	
	
}
char* myfuncopy(char* a,char*b)
{
	int i;
	for(i=0;b[i]!='\0';i++)
	{
		a[i]=b[i];
	}
	a[i]='\0';
	return a;
	
}
	

