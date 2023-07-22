#include <stdio.h>

// Area & Perimeter of circle and Rectangle Function type2// 
float circlearea();
float circleperimeter();
float rectanglearea();
float rectangleperimeter();
void main()
{	float a,b,c,d;
		a=circlearea();
		printf("Area of Circle is %.2fsqm\n",a);
		b=circleperimeter();
		printf("Perimeter of Circle is %.2fm\n",b);
		c=rectanglearea();
		printf("Area of REctangle is %.2fsqm\n",c);
		d=rectangleperimeter();
		printf("Perimeter of Rectangle is %.2fm\n",d);
		
}
 float circlearea()
{
	float Area,r;
	printf("\nPlease Enter Radius Value in meters Here:\n");
	scanf("%f",&r);
	
	//main formula//

	Area=3.142*r*r;      //area...
	printf("\nThe Given Radius is=%.2fm\n",r); 
    return Area;	
}
float circleperimeter()
{
	float Perimeter,r;
	printf("\nPlease Enter Radius Value again in meters Here for Perimeter of Circle:\n");
	scanf("%f",&r);
	
	//main formula//
    Perimeter=2*3.142*r;          //perimeter..
    
	printf("\nThe Given Radius is=%.2fm\n",r); 
	return Perimeter;	
}   

float rectanglearea()
{

	float Area,b,l;
	printf("Please Enter Length and Breath value here Value in meters Here:\n");
	scanf("%f %f",&l,&b);
	
	//main formula//
	Area=l*b;      //area...
	return Area;
}

float rectangleperimeter()
{

	float Perimeter,b,l;
	printf("Please Enter Length and Breath value Again here Value in meters Here For Perimeter of Rectangle:\n");
	scanf("%f %f",&l,&b);
	
	//main formula//
	Perimeter=2*(l+b);          //perimeter.. 
	return Perimeter;	
}

