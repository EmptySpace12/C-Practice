#include<stdio.h>
#include<string.h>
	
struct Watch
{
char quality[100];
char colour[100];
char company[100];
float price;	
	
};
void main()
{
	
	struct Watch s1,s2;
	strcpy(s1.quality,"Good");
	strcpy(s1.colour,"Gold");
	strcpy(s1.company,"Titan");
	s1.price=2499;
	
	printf("..........Watch............\n");	
	
	puts("\n..........For S1..........");
	printf("\nQuality of Watch is %s.",s1.quality);	
	printf("\nColour of Watch  is %s.",s1.colour);	
	printf("\nCompany of Watch  is %s.",s1.company);	
	printf("\nPrice of Watch is %.2f only/-\n",s1.price);	
	
	puts("\n..........For S2..........");
	
	puts("\nEnter Quality of Watch Good Or Bad:");	
	scanf("%s",&s2.quality);	
	puts("Enter Colour of Watch:");	
	scanf("%s",&s2.colour);	
	puts("Enter Company Name of Watch:");	
	scanf("%s",&s2.company);	
	puts("Enter Price  of Watch:");	
	scanf("%f",&s2.price);	
	
	printf("\nQuality of Watch is %s.",s2.quality);	
	printf("\nColour of Watch is %s.",s2.colour);	
	printf("\nCompany Name of Watch is %s.",s2.company);	
	printf("\nPrice of Watch is %.2f Only/-.",s2.price);	
	
}
