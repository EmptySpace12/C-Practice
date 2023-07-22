#include <stdio.h>

//temperature conversion  //

void main()
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


