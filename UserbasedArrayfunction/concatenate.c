#include<stdio.h>
//copying using userbased function//
char* myfuncat(char*,char*);
void main()
{
	
	char *c;
	char a[100];
	char b[100];
	printf("Enter Your String Here:");
	scanf("%s",a);
	printf("Enter Your String Here:");
	scanf("%s",b);
	
	c=myfuncat(a,b);
	printf("Your New String is:%s",c);
	
	
}
char* myfuncat(char* a,char*b)
{
	int i;
	int j=0;
	for(i=0;i<a[i];i++);
	
	for(j=0;b[j]!='\0';j++)
	{
		a[i]=b[j];
		i++;
	}
	a[i]='\0';
	return a;
	
}
	

