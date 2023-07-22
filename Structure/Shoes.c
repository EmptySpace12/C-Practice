#include<stdio.h>
#include<string.h>
	
struct Shoes
{
char quality[100];
char colour[100];
char company[100];
float price;	
	
};
void main()
{
	
	struct Shoes s1,s2;
	strcpy(s1.quality,"Good");
	strcpy(s1.colour,"white");
	strcpy(s1.company,"Nike");
	s1.price=2999;
	
	printf("..........Shoes............\n");	
	
	puts("\n..........For S1..........");
	printf("\nQuality of Shoes is %s.",s1.quality);	
	printf("\nColour of Shoes is %s.",s1.colour);	
	printf("\nCompany Name of Shoes is %s.",s1.company);	
	printf("\nPrice of Shoes is %.2f only/-\n",s1.price);	
	
	puts("\n..........For S2..........");
	
	puts("\nEnter Quality of Shoes Good Or Bad:");	
	scanf("%s",&s2.quality);	
	puts("Enter Colour of Shoes:");	
	scanf("%s",&s2.colour);	
	puts("Enter Company Name of Shoes:");	
	scanf("%s",&s2.company);	
	puts("Enter Price  of Shoes:");	
	scanf("%f",&s2.price);	
	
	printf("\nQuality of Shoes is %s.",s2.quality);	
	printf("\nColour of Shoes is %s.",s2.colour);	
	printf("\nCompany Name of Shoes is %s.",s2.company);	
	printf("\nPrice of Shoes is %.2f Only/-.",s2.price);	
	
}
