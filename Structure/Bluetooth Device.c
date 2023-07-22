#include<stdio.h>
#include<string.h>
	
struct Bluetooth_Device
{
char quality[100];
char colour[100];
char company[100];
float price;	
	
};
void main()
{
	
	struct Bluetooth_Device s1,s2;
	strcpy(s1.quality,"Good");
	strcpy(s1.colour,"Black");
	strcpy(s1.company,"Boat");
	s1.price=1299;
	
	printf("..........Bluetooth Device............\n");	
	
	puts("\n..........For S1..........");
	printf("\nQuality of Bluetooth Device is %s.",s1.quality);	
	printf("\nColour of Bluetooth Device is %s.",s1.colour);	
	printf("\nCompany of Bluetooth Device is %s.",s1.company);	
	printf("\nPrice of Bluetooth Device is %.2f only/-\n",s1.price);	
	
	puts("\n..........For S2..........");
	
	puts("\nEnter Quality of Bluetooth Device Good Or Bad:");	
	scanf("%s",&s2.quality);	
	puts("Enter Colour of Bluetooth Device:");	
	scanf("%s",&s2.colour);	
	puts("Enter Company Name of Bluetooth Device:");	
	scanf("%s",&s2.company);	
	puts("Enter Price  of Bluetooth Device:");	
	scanf("%f",&s2.price);	
	
	printf("\nQuality of Bluetooth Deviceis %s.",s2.quality);	
	printf("\nColour of Bluetooth Device is %s.",s2.colour);	
	printf("\nCompany Name of Bluetooth Device is %s.",s2.company);	
	printf("\nPrice of Bluetooth Device is %.2f Only/-.",s2.price);	
	
}
