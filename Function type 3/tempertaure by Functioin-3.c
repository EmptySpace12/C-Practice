#include <stdio.h>

//Cases temperature conversion Function type 3 //
void conversion(float,char);
void main()
 {	
 	char ch;
	printf("Choose for before u enter Temperature\n");
	printf("Enter 1:To convert in Fahrenhiet");
	printf("\nEnter 2:To convert in Kelvin\n");
	scanf("%c",&ch);
	
 	float t;
	printf("Enter the temperature here:");
	scanf("%f",&t);
 	conversion(t,ch);
 	 
 }
//Ask from user choice //

void conversion(float t,char ch)
{
	float f,k;
	
	//main formula 9c=(f-32)5//
if(ch=='1')
{
	f=(1.8*t)+32;      //fahrenhiet...
    printf("Conversion of given tempertaure in Fahrenhiet is=%.2fF\n",f);
}
if(ch=='2')
    {
	k=273+t;          //kelvin..
	printf("Conversion of given tempertaure in Kelvin is=%.2fK\n",k);		
	}
}
