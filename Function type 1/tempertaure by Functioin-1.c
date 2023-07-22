#include <stdio.h>

//Cases temperature conversion Function type1 //
void conversion();
void main()
 {
 	 conversion();
 	 
 }
 
void conversion()
{
	float t,f,k;
	printf("Enter the temperature in celcius=");
	scanf("%f",&t);
	//main formula 9c=(f-32)5//

	f=(1.8*t)+32;      //fahrenhiet...
    k=273+t;          //kelvin..
    printf("The Given temperature is=%.2fC\n",t);  // alt 0176 for symbol of degree//
    printf("Conversion of given tempertaure in Fahrenhiet is=%.2fF\n",f);
	printf("Conversion of given tempertaure in Kelvin is=%.2fK\n",k);		
}

//Ask from user choice //

void conversion()
{
	float t,f,k;
	char ch;
	printf("Choose for before u enter Temperature\n");
	printf("Enter 1:To convert in Fahrenhiet");
	printf("\nEnter 2:To convert in Kelvin\n");
	scanf("%c",&ch);
	printf("Enter the temperature here:");
	scanf("%f",&t);
	//main formula 9c=(f-32)5//
if(ch=='1')
{
	f=(1.8*t)+32;      //fahrenhiet...
    printf("Conversion of given tempertaure in Fahrenhiet is=%.2fF\n",f);
}
else if(ch=='2')
    {k=273+t;          //kelvin..
	printf("Conversion of given tempertaure in Kelvin is=%.2fK\n",k);		
	}
}
