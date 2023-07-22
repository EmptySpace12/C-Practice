#include<stdio.h>
#include<string.h>
	
struct table
{
char quality[100];
char colour[100];
char company[100];
float price;	
	
};
void main()
{
	
	struct table s1,s2;
	strcpy(s1.quality,"Good");
	strcpy(s1.colour,"Brown");
	strcpy(s1.company,"Flexible Furniture");
	s1.price=999;
	
	printf("..........Table............\n");	
	
	puts("\n..........For S1..........");
	printf("\nQuality of Table is %s",s1.quality);	
	printf("\nColour of Table is %s",s1.colour);	
	printf("\nCompany of Table is %s",s1.company);	
	printf("\nPrice of Table is %.2f Only/-\n",s1.price);	
	
	puts("\n..........For S2..........");
	
	puts("\nEnter Quality of Table Good Or Bad:");	
	scanf("%s",&s2.quality);	
	puts("Enter Colour of Table:");	
	scanf("%s",&s2.colour);	
	puts("Enter Company Name of Table:");	
	scanf("%s",&s2.company);	
	puts("Enter Price  of Table:");	
	scanf("%f",&s2.price);	
	
	printf("\nQuality of Table is %s",s2.quality);	
	printf("\nColour of Table is %s",s2.colour);	
	printf("\nCompany Name of Table is %s",s2.company);	
	printf("\nPrice of Table is %.2f Only/-",s2.price);	
	
}
