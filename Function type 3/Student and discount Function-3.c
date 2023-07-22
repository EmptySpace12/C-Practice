#include<stdio.h>
//Student and discount by Function type 3//
void Student_Discount(int);
void main()
{
 	int price,s;
	printf("Hey enter the price here\n");
	scanf("%d",&price);
	Student_Discount(price);
 
}
void Student_Discount(int price)
{
	char s;
	fflush(stdin);
	printf("hey r u student!\n.... Type y for yes and n for no...\n ");
	scanf("%c",&s);
	
    int dis,final;
	if(s=='y')
	{
		 if(price>500)
		{
		dis=price*0.2;
		final=price-dis;
		printf("Hey Your Discount is:20%5%\n");
		printf("Payable Price is=%d\n",final);
	    }
  		else 
		{
		dis=price*0.1;
		final=price-dis;
		printf("Hey your Discount is:10%%\n ");
		printf("Payable Price is=%d\n",final);
        }     
	}
	
	
		if(s=='n')
	{
			
			if (price>600)
			
			{
			dis=price*0.15;
			final=price-dis;
			printf("Hey Your Discount is:15%%\n");
			printf("Payable Price is=%d\n",final);
	     	}
			else 
			
			{
			printf("Sorry! NO discount\n");
			printf("Payable Price is=%d",price);
			}
	       
	}
}
