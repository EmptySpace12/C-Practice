#include<stdio.h>
#include<string.h>
	
struct Door
{
char quality[100];
char colour[100];
char company[100];
float price;	
	
};
void main()
{
	
	struct Door s1,s2;
	strcpy(s1.quality,"Good");
	strcpy(s1.colour,"Red");
	strcpy(s1.company,"Woodleen");
	s1.price=1499;
	
	printf("..........Door............\n");	
	
	puts("\n..........For S1..........");
	printf("\nQuality of Door is %s",s1.quality);	
	printf("\nColour of Door is %s",s1.colour);	
	printf("\nCompany of Door is %s",s1.company);	
	printf("\nPrice of Door is %.2f Only/-\n",s1.price);	
	
	puts("\n..........For S2..........");
	
	puts("\nEnter Quality of Door Good Or Bad:");	
	scanf("%s",&s2.quality);	
	puts("Enter Colour of Door:");	
	scanf("%s",&s2.colour);	
	puts("Enter Company Name of Door:");	
	scanf("%s",&s2.company);	
	puts("Enter Price  of Door:");	
	scanf("%f",&s2.price);	
	
	printf("\nQuality of Door is %s",s2.quality);	
	printf("\nColour of Door is %s",s2.colour);	
	printf("\nCompany Name of Door is %s",s2.company);	
	printf("\nPrice of Door is %.2f Only/-",s2.price);	
	
}
