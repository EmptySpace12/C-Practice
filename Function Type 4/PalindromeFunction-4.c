#include<stdio.h>
// only check palindrome or not by function type 4//
int palindrome(int);
void main()
{
	int a,n;
	printf("Enter no. Here to Check Palindrome or not ");
	scanf("%d",&n);
	a=palindrome(n);
	if(a==1)
	printf("Hey Your Entered Number is Palindrome");
	else
	printf("Hey Your Entered Number is Not Palindrome");
}

int palindrome(int n)
{

	int r,reverse=0,i;
	
//for loop//	
	for(i=n;n>0;n=n/10)
	{
		r=n%10;
		reverse=reverse*10+r;
		
	}
		
	return(i==reverse)?1: 0;
}

