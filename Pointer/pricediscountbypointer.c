#include <stdio.h>

// From Discount find Price using by Pointer //
//we can aslo take discount value directly by giving one more parameter from main ..// 

void Discountprice(float*,float*);
void main()
 {
 	float a,price;

	printf("Please Enter Price here: \n");
	scanf("%f",&price);

 	Discountprice(&price,&a);
 	printf("Payable amount after Discount is %.2f\n",a);
   		
 }
void Discountprice(float* price,float* total)
{
  
    float dis;


	 	if (*price<=500)
    	{
    		
    		printf("Hey..Discount on item is 5%%. \n");
    		dis=(*price)*0.05;
		}
   		else if(500<*price && *price <=1000)   
   		{	
    		printf("Hey..Discount on item is 10%%. \n");
   			dis=(*price)*0.1;
		}
		else if(1000<*price)   
   		{	
    		printf("Hey..Discount on item is 15%%. \n");
   			dis=(*price)*0.15;
		}
	
	
   		*total=(*price)-dis;		
   		printf("Your Price of Item was %.2f \n",*price);
   		printf("Discount on item is %.2f\n",dis);
   		
}


