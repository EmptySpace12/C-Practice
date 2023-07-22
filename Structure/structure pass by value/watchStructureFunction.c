#include<stdio.h>
#include<string.h>
struct Watch
{
	char quality[50];
	char company[50];
	float price;	
};
struct Watch store(struct Watch );
void display(struct Watch s2);

void main()
{
	struct Watch s1;
	s1=store(s1);
	display(s1);
	
}
struct Watch store(struct Watch s2)
{

	puts("........Hey Answer The Below Question.........");
	puts("........................................................................");

	puts("Enter Quality of Watch Good Or Bad:");	
	scanf("%s",&s2.quality);	
	puts("Enter Company Name of Watch:");	
	scanf("%s",&s2.company);	
	puts("Enter Price  of Watch:");	
	scanf("%f",&s2.price);	


	return s2;
}
void display(struct Watch a)
{
	puts("........................................................................");
	
	puts("\n..............Your Outcome is..................");
	printf("The Quality of Watch is %s.",a.quality);
	printf("\nThe Name of Watch Company is %s.",a.quality);
	printf("\nThe Price of Watch is %.2f Only/-.",a.price);
}

