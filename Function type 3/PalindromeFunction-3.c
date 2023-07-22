#include<stdio.h>
// only check palindrome or not by function type 3//
void palindrome(int);
void main()

{
	int n;
	printf("Enter no. Here to Check Palindrome or not ");
	scanf("%d",&n);
	palindrome(n);
}

void palindrome(int n)
{

	int r,reverse=0,i;
	
//for loop//	
	for(i=n;n>0;n=n/10)
	{
		r=n%10;
		reverse=reverse*10+r;
		
	}
		
	(i==reverse)?printf("Hey %d is Palindrome",i):printf("Hey %d is not Palindrome",i);
}

