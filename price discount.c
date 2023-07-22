#include <stdio.h>

// From Discount find Price // 

void main()
 {
    float total,price,dis;

	printf("Please Enter Price here: ");
	scanf("%f",&price);

	 if (price<=500)
    	{
    		
    		printf("Hey..Discount on item is 5%%");
    		dis=price*0.05;
		}
   		else if(500<price && price <=1000)   
   		{	
    		printf("Hey..Discount on item is 10%%");
   			dis=price*0.1;
		}
		else if(1000<price)   
   		{	
    		printf("Hey..Discount on item is 15%%");
   			dis=price*0.2;
		}
	
	
   		total=price-dis;
   		printf(" Price= %.2f\n",price);
   		printf(" \nDiscount= %.2f\n",dis);
   		printf(" Total Payble amount is= %.2f\n",total);
		
		
}


