#include<stdio.h>
#include<string.h>
	
struct Eyeglass
{
char quality[100];
char colour[100];
char company[100];
float price;	
	
};
void main()
{
	
	struct Eyeglass s1,s2;
	strcpy(s1.quality,"Excellent");
	strcpy(s1.colour,"Black");
	strcpy(s1.company,"Lenskart");
	s1.price=1299;
	
	printf("..........Eyeglass............\n");	
	
	puts("\n..........For S1..........");
	printf("\nQuality of Eyeglass is %s.",s1.quality);	
	printf("\nColour of Eyeglass is %s.",s1.colour);	
	printf("\nCompany of Eyeglass is %s.",s1.company);	
	printf("\nPrice of Eyeglass is %.2f only/-\n",s1.price);	
	
	puts("\n..........For S2..........");
	
	puts("\nEnter Quality of Eyeglass Good Or Bad:");	
	scanf("%s",&s2.quality);	
	puts("Enter Colour of Eyeglass:");	
	scanf("%s",&s2.colour);	
	puts("Enter Company Name of Eyeglass:");	
	scanf("%s",&s2.company);	
	puts("Enter Price  of Eyeglass:");	
	scanf("%f",&s2.price);	
	
	printf("\nQuality of Eyeglass is %s.",s2.quality);	
	printf("\nColour of Eyeglass is %s.",s2.colour);	
	printf("\nCompany Name of Eyeglass is %s.",s2.company);	
	printf("\nPrice of Eyeglass is %.2f Only/-.",s2.price);	
	
}
