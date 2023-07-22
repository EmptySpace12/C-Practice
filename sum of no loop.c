#include<stdio.h>
//sum Three digit also tried reverse and poalindrome case//
void main()
    
{
	
	int no,n,r,sum=0;
    printf("Enter the No. here ...");
	scanf("%d",&n);
	no=n;
	/*
	while(n>0)
	{
		r=n%10;
		sum=sum+r;
		n=n/10;	
	}*/
	printf("Your No. is : %d\n",n);
	for(n;n>0;n=n/10)
	{
	     r=n%10;
		sum=sum+r;	
	}
		printf("Hey For Above  No. its Sum of digits is: %d",sum);
 	/*while(n!=0)
 	r=n%10;
 	reverse=reverse*10+r;
 	n=n/10;*/
	
	if(reverse==no)
 		{
 			printf("Given No. is Palindrome..");
		}
	else
	{
	printf("Given No. is Not Palindrome..");
	}		
}

