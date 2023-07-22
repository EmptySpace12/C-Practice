#include<stdio.h>
#include<string.h>
typedef struct Date
{
	int  day;
	int month;
	int year;
	
	
}Date;
void store(Date*);
void display(Date*);

void main()
{
	Date d1;
	store(&d1);	
	display(&d1);
		
}
void store(Date* d1)
{

	puts("........Hey Answer The Below Question.........");

	puts("........................................................................");
	printf("Enter Day of The Date      :");	
	scanf("%d",&d1->day);
	printf("Enter Month Number of Date :");	
	scanf("%d",&d1->month);
	printf("Enter Year of Date         :");	
	scanf("%d",&d1->year);
	fflush(stdin);
	
}
void display(Date* a)
{
	puts("\n Hey ur Entered Details are");
	puts("........................................................................");
	printf("Day|Month|Year:");
	printf("\n %d   %d    %d",a->day,a->month,a->year);

	
	
}

