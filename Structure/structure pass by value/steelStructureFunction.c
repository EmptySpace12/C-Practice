#include<stdio.h>
#include<string.h>
struct Steel
{
	char quality[50];
	char company[50];
	float price;	
};
struct Steel store(struct Steel );
void display(struct Steel s2);

void main()
{
	struct Steel s1;
	s1=store(s1);
	display(s1);
	
}
struct Steel store(struct Steel s2)
{
	puts("........Hey Answer The Below Question.........");
	puts("........................................................................");

	puts("Enter Quality of Steel Good Or Bad:");	
	scanf("%s",&s2.quality);	
	puts("Enter Company Name of Steel:");	
	scanf("%s",&s2.company);	
	puts("Enter Price  of Steel:");	
	scanf("%f",&s2.price);	


	return s2;
}
void display(struct Steel a)
{
	puts("........................................................................");
	
	puts("\n..............Your Outcome is..................");
	printf("The Quality of Steel is %s.",a.quality);
	printf("\nThe Name of Steel Company is %s.",a.quality);
	printf("\nThe Price of Steel is %.2f per/kg.",a.price);
}

