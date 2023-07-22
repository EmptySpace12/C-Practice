#include <stdio.h>

//Cases temperature conversion Function type 4//

float conversion(float,char);
void main()
 {	
 	float a,t;
	char ch;
	printf("Choose for before u enter Temperature\n");
	printf("Enter 1:To convert in Fahrenhiet");
	printf("\nEnter 2:To convert in Kelvin\n");
	scanf("%c",&ch);
	printf("Enter the temperature here:");
	scanf("%f",&t);
	
 	a=conversion(t,ch);
	printf("%.2fF",a);
}
//Ask from user choice //

float conversion(float t,char ch)
{
	float f,k;
	//char ch;
	//main formula 9c=(f-32)5//
if(ch=='1')
{
	f=(1.8*t)+32;      //fahrenhiet...
    printf("Conversion of given tempertaure in Fahrenhiet is ");
 	
	return f;
	}
else if(ch=='2')
    {k=273+t;          //kelvin..
	printf("Conversion of given tempertaure in Kelvin is ");		
	return k;
	}
}
