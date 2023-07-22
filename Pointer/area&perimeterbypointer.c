#include <stdio.h>

// Area & Perimeter of circle and Rectangle by pointer// 
void circle(float*,float*,float*);
void rectangle(float*,float*,float*,float*);
void main()
{	
	float r,l,b,a1,p1,a2,p2;
 	printf("\nPlease Enter Radius Value in meters Here:\n");
	scanf("%f",&r);
	printf("\nThe Given Radius is=%.2fm\n",r); 
	
	circle(&r,&a1,&p1);
	printf("Area of Circle is=%.2fsqm\n",a1);
	printf("Perimeter of Circle is=%.2fm\n",p1);		

	printf("\nPlease Enter Length and Breath value here Value in meters Here:\n");
	scanf("%f %f",&l,&b);
	
	rectangle(&l,&b,&a2,&p2);    	
	printf("Area of Rectangle is=%.2fsqm\n",a2);
	printf("Perimeter of Rectangle is=%.2fm\n",p2);		


}
 void circle(float* r,float* a1,float* p1)
{
	//main formula//

	*a1=3.142*(*r)*(*r);      //area...
    *p1=2*3.142*(*r);          //perimeter..
	
}   

void rectangle(float* l,float* b,float* a2,float* p2)
{	
	//main formula//
	*a2=(*l)*(*b);      //area...
    *p2=2*(*l)+(*b);          //perimeter.. 
}

