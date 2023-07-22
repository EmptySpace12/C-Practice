#include <stdio.h>

// Area & Perimeter of circle and Rectangle Function type1// 
void circle();
void rectangle();
void main()
{
        	rectangle();
        	circle();
}
 void circle()
{
	float Area,Perimeter,r;
	printf("\nPlease Enter Radius Value in meters Here:\n");
	scanf("%f",&r);
	
	//main formula//

	Area=3.142*r*r;      //area...
    Perimeter=2*3.142*r;          //perimeter..
    
	printf("\nThe Given Radius is=%.2fm\n",r); 
	printf("Area of Circle is=%.2fsqm\n",Area);
	printf("Perimeter of Circle is=%.2fm\n",Perimeter);		
	
}   

void rectangle()
{

	float Area,Perimeter,b,l;
	printf("Please Enter Length and Breath value here Value in meters Here:\n");
	scanf("%f %f",&l,&b);
	
	//main formula//
	Area=l*b;      //area...
    Perimeter=2*(l+b);          //perimeter.. 
	printf("Area of Rectangle is=%.2fsqm\n",Area);
	printf("Perimeter of Rectangle is=%.2fm\n",Perimeter);		
}

