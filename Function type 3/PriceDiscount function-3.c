#include <stdio.h>

// From Discount find Price using Function type 3 // 
void Discountprice(float);
void main()
 {
 	float price;

	printf("Please Enter Price here: \n");
	scanf("%f",&price);

 	Discountprice(price);
 }
void Discountprice(float price)
{
  
    float total,dis;


	 	if (price<=500)
    	{
    		
    		printf("Hey..Discount on item is 5%%. \n");
    		dis=price*0.05;
		}
   		else if(500<price && price <=1000)   
   		{	
    		printf("Hey..Discount on item is 10%%. \n");
   			dis=price*0.1;
		}
		else if(1000<price)   
   		{	
    		printf("Hey..Discount on item is 15%%. \n");
   			dis=price*0.2;
		}
	
	
   		total=price-dis;		
   		printf("Your Price of Item was %.2f \n",price);
   		printf("Discount on item is %.2f%%\n",dis);
   		printf("Payable amount after Discount is %.2f\n",total);
   		
}


