#include <stdio.h>

//Area & Perimeter of circle// 

void main()
{
    float Area,Perimeter,r;
	printf("Please Enter Radius Value in meters Here");
	scanf("%f",&r);
	
	//main formula//
	// Area=3.142*r*r & perimeter =2*3.142*r 

	Area=3.142*r*r;      //area...
    Perimeter=2*3.142*r;          //perimeter..
    
	printf("The Given Radius is=%.2fm\n",r); 
	printf("Area of Circle is=%.2fsqm\n",Area);
	printf("Perimeter of Circle is=%.2fm\n",Perimeter);		

}

