#include<stdio.h>
// only check palindrome or not by function type 2//
int palindrome();
void main()

{
	int a;
	a=palindrome();
	if(a==1)
	{
		printf(" is Palindrome Number");
	}
	else
	printf(" is Not Palindrome Number");
	
}

int palindrome()
{

	int n,r,reverse=0,i;
	printf("Enter no. Here to Check Palindrome or not ");
	scanf("%d",&n);
//for loop//	
	for(i=n;n>0;n=n/10)
	{
		r=n%10;
		reverse=reverse*10+r;
		
	}
		
	if(i==reverse)
	{
		printf("Hey..%d",i);
		return 1;
	}
	else
	{
		printf("Hey..%d",i);
		return 0;
	}
	
}

