#include<stdio.h>
#include<string.h>
typedef struct ComplexNumber
{
	float  real;
	float imaginary;
	
	
	
}ComplexNumber;
void store(ComplexNumber*);
void display(ComplexNumber*);

void main()
{
	ComplexNumber cn1;
	store(&cn1);	
	display(&cn1);
		
}
void store(ComplexNumber* cn1)
{

	puts("........Hey Answer The Below Question.........");
	puts("........................................................................");
	printf("Enter Real Number     :");	
	scanf("%f",&cn1->real);
	printf("Enter Imaginary Number:");	
	scanf("%f",&cn1->imaginary);
	fflush(stdin);
	
}
void display(ComplexNumber* a)
{
	puts("\n Hey ur Entered Details are");
	puts("........................................................................");
	printf("The Syntax   :(RealNumber)+(ImaginaryNumber)i");
	printf("\nYour Equation:     %.2f   +      %.2fi",a->real,a->imaginary);
	
}

