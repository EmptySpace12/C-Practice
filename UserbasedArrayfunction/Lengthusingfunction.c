#include<stdio.h>
int myfunlength(char*);
void main()
{
	int b,i,n,r;
	char a[100];
	
	
	printf("Enter Your String Here:");
	scanf("%s",a);
	b=myfunlength(a);
	printf("Length of String is:%d",b);
	
	
}
int myfunlength(char* a)
{
	int i;
	for(i=0;a[i]!='\0';i++);
	return i;
	
}
	

