#include<stdio.h>
#include<string.h>
struct Cement
{
	char quality[50];
	char company[50];
	float price;	
};
struct Cement store(struct Cement );
void display(struct Cement s2);

void main()
{
	struct Cement s1;
	s1=store(s1);
	display(s1);
	
}
struct Cement store(struct Cement s2)
{
	//hard coded//
	/*strcpy(s2.quality,"Good");
	strcpy(s2.company,"Ambuja");
	s2.price=650;*/
	puts("........Hey Answer The Below Question.........");
	puts("........................................................................");

	puts("Enter Quality of Cement Good Or Bad:");	
	scanf("%s",&s2.quality);	
	puts("Enter Company Name of Cement:");	
	scanf("%s",&s2.company);	
	puts("Enter Price  of Cement:");	
	scanf("%f",&s2.price);	


	return s2;
}
void display(struct Cement a)
{
	puts("........................................................................");
	
	puts("\n..............Your Outcome is..................");
	printf("The Quality of Cement is %s.",a.quality);
	printf("\nThe Name of Cement Company is %s.",a.quality);
	printf("\nThe Price of Cement is %.2f per/kg.",a.price);
}

