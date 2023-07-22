#include<stdio.h>
//Student and discount by Function type 4//
int Student_Discount(int);
void main()
{
 	int a,price,s;
	printf("Hey enter the price here\n");
	scanf("%d",&price);
	
	a=Student_Discount(price);
	printf("Payable Price is=%d\n",a);
	    
}
int Student_Discount(int price)
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
		return final;
		}
  		else 
		{
		dis=price*0.1;
		final=price-dis;
		printf("Hey your Discount is:10%%\n ");
		return final;
	
	    }     
	}
	
	
		if(s=='n')
	{
			
			if (price>600)
			
			{
			dis=price*0.15;
			final=price-dis;
			printf("Hey Your Discount is:15%%\n");
			return final;

	     	}
			else 
			
			{
			printf("Sorry! NO discount\n");
			return price;
			}
	       
	}
}
