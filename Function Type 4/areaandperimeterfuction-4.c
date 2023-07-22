#include <stdio.h>

// Area & Perimeter of circle and Rectangle Function type 4// 
float circlearea(float);
float circleperimeter(float);
float rectanglearea(float,float);
float rectangleperimeter(float,float);
void main()
{	float a,B,c,d;
	float r,l,b;
	
	printf("\nPlease Enter Radius Value in meters Here:\n");
	scanf("%f",&r);
	a=circlearea(r);
	printf("Area of Circle is %.2fsqm\n",a);
	
	printf("\nPlease Enter Radius Value again in meters Here for Perimeter of Circle:\n");
	scanf("%f",&r);
	B=circleperimeter(r);
	printf("Perimeter of Circle is %.2fm\n",B);
	
	printf("Please Enter Length and Breath value here Value in meters Here:\n");
	scanf("%f %f",&l,&b);
	c=rectanglearea(l,b);
	printf("Area of REctangle is %.2fsqm\n",c);
	
	printf("Please Enter Length and Breath value Again here Value in meters Here For Perimeter of Rectangle:\n");
	scanf("%f %f",&l,&b);
	d=rectangleperimeter(l,b);
	printf("Perimeter of Rectangle is %.2fm\n",d);
		
}
 float circlearea(float r)
{
	float Area;
	
	//main formula//

	Area=3.142*r*r;      //area...
	printf("\nThe Given Radius is=%.2fm\n",r); 
    return Area;	
}
float circleperimeter(float r)
{
	float Perimeter;
	
	//main formula//
    Perimeter=2*3.142*r;          //perimeter..
    
	printf("\nThe Given Radius is=%.2fm\n",r); 
	return Perimeter;	
}   

float rectanglearea(float l,float b)
{

	float Area;
	
	//main formula//
	Area=l*b;      //area...
	return Area;
}

float rectangleperimeter(float l,float b)
{

	float Perimeter;
	
	//main formula//
	Perimeter=2*(l+b);          //perimeter.. 
	return Perimeter;	
}

