#include<stdio.h>
//Compare using userbased function//
int compare(char*,char*);
void main()
{
	char a[100];
	char b[100];

	printf("Enter Your First String Here:");
	scanf("%s",&a);
	printf("Enter Your Second String Here:");
	scanf("%s",&b);
	int c;
	c=compare(a,b);
	if(c==1)
	puts("The Strings Are Different");
	else
	puts("The Strings Are Same");
	
}
int compare(char* a,char* b)
{
int i,count=0;
		for (i=0;a[i]!='\0'|| b[i]!='\0';i++)
		{
			if(a[i]!=b[i])
			{
			count=1;
			break;
			}
		}
	return count;
	
	
}

