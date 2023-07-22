#include<stdio.h>
#include<string.h>
	
struct Chair
{
char quality[100];
char colour[100];
char company[100];
float price;	
	
};
void main()
{
	
	struct Chair s1,s2;
	strcpy(s1.quality,"Good");
	strcpy(s1.colour,"Grey");
	strcpy(s1.company,"Woodleen");
	s1.price=599;
	
	printf("..........Chair............\n");	
	
	puts("\n..........For S1..........");
	printf("\nQuality of Chair is %s",s1.quality);	
	printf("\nColour of Chair is %s",s1.colour);	
	printf("\nCompany of Chair is %s",s1.company);	
	printf("\nPrice of Chair is %.2f Only/-\n",s1.price);	
	
	puts("\n..........For S2..........");
	
	puts("\nEnter Quality of Chair Good Or Bad:");	
	scanf("%s",&s2.quality);	
	puts("Enter Colour of Chair:");	
	scanf("%s",&s2.colour);	
	puts("Enter Company Name of Chair:");	
	scanf("%s",&s2.company);	
	puts("Enter Price  of Chair:");	
	scanf("%f",&s2.price);	
	
	printf("\nQuality of Chair is %s",s2.quality);	
	printf("\nColour of Chair is %s",s2.colour);	
	printf("\nCompany Chair of Table is %s",s2.company);	
	printf("\nPrice of Chair is %.2f Only/-",s2.price);	
	
}
