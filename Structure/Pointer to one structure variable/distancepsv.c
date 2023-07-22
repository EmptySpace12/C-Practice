#include<stdio.h>
#include<string.h>
typedef struct Distance
{
	float  feets;
	float inches;
	
	
	
}Distance;
void store(Distance*);
void display(Distance*);

void main()
{
	Distance d1;
	store(&d1);	
	display(&d1);
		
}
void store(Distance* d1)
{

	puts("........Hey Answer The Below Question.........");
	puts("........................................................................");
	printf("Enter Number in feet   :");	
	scanf("%f",&d1->feets);
	printf("Enter Number in Inches :");	
	scanf("%f",&d1->inches);
	fflush(stdin);
	
}
void display(Distance* a)
{
	puts("\n Hey ur Entered Details are");
	puts("\n........................................................................");
	printf("Feets|Inches");
	printf("\n%.2f | %.2f",a->feets,a->inches);
	
}

