#include<stdio.h>

//Palindrome cases//
// only check palindrome or not//
void main1()
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
//while loop//
        i=n;	 
		while(n>0)
		{
			r=n%10;
			reverse=reverse*10+r;
			n=n/10;
		}	
		
	(i==reverse)?printf("Hey %d is Palindrome",i):printf("Hey %d is not Palindrome",i);
}

// Range//
void main()
{
	int onum,n,r,reverse=0,i,low,high;
	printf("Enter Your range to Find Palindrome Numbers ");
	scanf("%d %d",&low,&high);
	printf("Your Palindromes btw your entered Range Are:");
	
	for(onum=low;onum<=high;onum++) 
	{
	        reverse=0;
			for(n=onum;n>0;n=n/10)
			{
				r=n%10;
				reverse=reverse*10+r;
				
			}
			if(onum==reverse)
			printf("%d ",onum);
	}	
}

