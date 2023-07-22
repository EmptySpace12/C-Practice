#include <stdio.h>

// temperature conversion Function type2 //
//float Kelvin();

float Conversion();
void main()
 {
 	 float fl;
	//kl=Kelvin();
	//printf("Your Conversion in Kelvin is %f\n",kl);
	fl= Conversion();
	printf(" %.2f",fl);	
	
 }


//Ask from user choice //

float Conversion()
{
	float t,f,k;
	char ch;
	printf("Choose before u enter Temperature\n");
	printf("Enter 1:To convert in Fahrenhiet");
	printf("\nEnter 2:To convert in Kelvin\n");
	scanf("%c",&ch);
	printf("\nEnter The Temperature in Degree Celcius here:");
	scanf("%f",&t);
		
		if(ch=='1')
		{
			f=(1.8*t)+32;
			printf("Conversion in Fahrenhiet is :");
			return f;      //fahrenhiet...
		}
		
		else if(ch=='2')
    
		{
		k=273+t;
		printf("Conversion in Fahrenhiet is :");	
		return k;          //kelvin..		
		}
	}


