#include<stdio.h>
#include<string.h>
	
struct Steel
{
char quality[100];
char colour[100];
char company[100];
float price;	
	
};
void main()
{
	
	struct Steel s1,s2;
	strcpy(s1.quality,"Good");
	strcpy(s1.colour,"Brown");
	strcpy(s1.company,"Jalandar Steel");
	s1.price=1150;
	
	printf("..........Steel............\n");	
	
	puts("\n..........For S1..........");
	printf("\nQuality of Steel is %s",s1.quality);	
	printf("\nColour of Steel is %s",s1.colour);	
	printf("\nCompany of Steel is %s",s1.company);	
	printf("\nPrice of Steel is %.2f per/kg\n",s1.price);	
	
	puts("\n..........For S2..........");
	
	puts("\nEnter Quality of Steel Good Or Bad:");	
	scanf("%s",&s2.quality);	
	puts("Enter Colour of Steel Brown or Grey:");	
	scanf("%s",&s2.colour);	
	puts("Enter Company Name of Steel:");	
	scanf("%s",&s2.company);	
	puts("Enter Price  of Steel:");	
	scanf("%f",&s2.price);	
	
	printf("\nQuality of Steel is %s.",s2.quality);	
	printf("\nColour of Steel is %s.",s2.colour);	
	printf("\nCompany Name of Steel is %s.",s2.company);	
	printf("\nPrice of Steel is %.2f per/kg.",s2.price);	
	
}
