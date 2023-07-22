#include<stdio.h>
#include<string.h>
struct Eyeglass
{
	char quality[50];
	char company[50];
	float price;	
};
struct Eyeglass store(struct Eyeglass );
void display(struct Eyeglass s2);

void main()
{
	struct Eyeglass s1;
	s1=store(s1);
	display(s1);
	
}
struct Eyeglass store(struct Eyeglass s2)
{

	puts("........Hey Answer The Below Question.........");
	puts("........................................................................");

	puts("Enter Quality of Eyeglass Good Or Bad:");	
	scanf("%s",&s2.quality);	
	puts("Enter Company Name of Eyeglass:");	
	scanf("%s",&s2.company);	
	puts("Enter Price  of Eyeglass:");	
	scanf("%f",&s2.price);	


	return s2;
}
void display(struct Eyeglass a)
{
	puts("........................................................................");
	
	puts("\n..............Your Outcome is..................");
	printf("The Quality of Eyeglass is %s.",a.quality);
	printf("\nThe Name of Eyeglass Company is %s.",a.quality);
	printf("\nThe Price of Eyeglass is %.2f Only/-.",a.price);
}

