#include<stdio.h>
// only check palindrome or not by function type 1//
void palindrome();
void main()

{
	 palindrome();
}

void palindrome()
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
		
	(i==reverse)?printf("Hey %d is Palindrome",i):printf("Hey %d is not Palindrome",i);
}

