#include<stdio.h>
//Student and discount by Function type 1//
//we can write diff function call for yes and no also// 
void Student_Discount();
void main()
 {
 void Student_Discount();
 }
void Student_Discount()
{

    int price,dis,final;
	char s;

	printf("Hey enter the price here\n");
	scanf("%d",&price);
	fflush(stdin);
	printf("hey r u student!\n.... Type y for yes and n for no...\n ");
	scanf(" %c",&s);

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
