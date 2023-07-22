#include <stdio.h>
// one digit to word function type 1//
void num_word();
void main()
{
	 num_word();
}
void num_word()
{
	int n,q,r;	
	printf ("Enter a no. Here....!\n");
	scanf("%d",&n);
	printf ("Your Conversion is ....!\n");
	
	r=n%10;
	q=n/10;

        if (n>10 && n<20)		
		{
		
			if (r==1)
			printf ("eleven\n");
			else if (r==2)
			printf ("Twelve\n");
			else if (r==3)
			printf ("Thirteen\n");
			else if (r==4)
			printf ("fourtheen\n");
			else if (r==5)
			printf ("fifteen\n");
			else if (r==6)
			printf ("Sixteen\n");
			else if (r==7)
			printf ("Seventeen\n");
			else if (r==8)
			printf ("Eighteen\n");
			else if (r==9)
			printf ("Nineteen\n");
		}			
			
			else {
			
			if (q==1)
			printf ("Ten\n");
			else if (q==2)
			printf ("twenty");
			else if (q==3)
			printf ("Thirty");
			else if (q==4)
			printf ("fourty");
			else if (q==5)
			printf ("fifty");
			else if (q==6)
			printf ("Sixty");
			else if (q==7)
			printf ("Seventy");
			else if (q==8)
			printf ("Eighty");
			else if (q==9)
			printf ("Ninety");
		
		
			if  (r==1)
			printf ("One\n");
			else if (r==2)
			printf ("Two\n");
			else if (r==3)
			printf ("Three\n");
			else if (r==4)
			printf ("four\n");
			else if (r==5)
			printf ("five\n");
			else if (r==6)
			printf ("Six\n");
			else if (r==7)
			printf ("Seven\n");
			else if (r==8)
			printf ("Eight\n");
			else if (r==9)
			printf ("Nine\n");
	
			else 
			printf ("Invalid Input");
	
			}
}

		
		
	
		




