#include<stdio.h>
#include<string.h>
struct Bluetooth_device
{
	char quality[50];
	char company[50];
	float price;	
};
struct Bluetooth_device store(struct Bluetooth_device );
void display(struct Bluetooth_device );

void main()
{
	struct Bluetooth_device s1;
	s1=store(s1);
	display(s1);
	
}
struct Bluetooth_device store(struct Bluetooth_device s2)
{

	puts("........Hey Answer The Below Question.........");
	puts("........................................................................");

	puts("Enter Quality of Bluetooth_device Good Or Bad:");	
	scanf("%s",s2.quality);	
	puts("Enter Company Name of Bluetooth_device:");	
	scanf("%s",&s2.company);	
	puts("Enter Price  of Bluetooth_device:");	
	scanf("%f",&s2.price);	


	return s2;
}
void display(struct Bluetooth_device a)
{
	puts("........................................................................");
	
	puts("\n..............Your Outcome is..................");
	printf("The Quality of Bluetooth_device is %s.",a.quality);
	printf("\nThe Name of Bluetooth_device Company is %s.",a.company);
	printf("\nThe Price of Bluetooth_device is %.2f Only/-.",a.price);
}

