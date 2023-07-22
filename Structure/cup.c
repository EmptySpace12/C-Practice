#include<stdio.h>
#include<string.h>
	
struct Cup
{
char quality[100];
char colour[100];
char company[100];
float price;	
	
};
void main()
{
	
	struct Cup s1,s2;
	strcpy(s1.quality,"Good");
	strcpy(s1.colour,"White");
	strcpy(s1.company,"Decor");
	s1.price=399;
	
	printf("..........Cup............\n");	
	
	puts("\n..........For S1..........");
	printf("\nQuality of Cup is %s.",s1.quality);	
	printf("\nColour of Cup is %s.",s1.colour);	
	printf("\nCompany of Cup is %s.",s1.company);	
	printf("\nPrice of Cup is %.2f 4cup/box.\n",s1.price);	
	
	puts("\n..........For S2..........");
	
	puts("\nEnter Quality of Cup Good Or Bad:");	
	scanf("%s",&s2.quality);	
	puts("Enter Colour of Cup:");	
	scanf("%s",&s2.colour);	
	puts("Enter Company Name of Cup:");	
	scanf("%s",&s2.company);	
	puts("Enter Price  of Cup:");	
	scanf("%f",&s2.price);	
	
	printf("\nQuality of Cup is %s.",s2.quality);	
	printf("\nColour of Cup is %s.",s2.colour);	
	printf("\nCompany Name of Cup is %s.",s2.company);	
	printf("\nPrice of Cup is %.2f 4cup/box.",s2.price);	
	
}
