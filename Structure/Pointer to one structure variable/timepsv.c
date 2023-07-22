#include<stdio.h>
#include<string.h>
typedef struct Time
{
	int  hours;
	int mins;
	int seconds;
	
	
}Time;
void store(Time*);
void display(Time*);

void main()
{
	Time t1;
	store(&t1);	
	display(&t1);
		
}
void store(Time* t1)
{

	puts("........Hey Answer The Below Question.........");
	puts("........................................................................");
	printf("Enter Hours   :");	
	scanf("%d",&t1->hours);
	printf("Enter Minutes :");	
	scanf("%d",&t1->mins);
	printf("Enter Seconds :");	
	scanf("%d",&t1->seconds);
	fflush(stdin);
	
}
void display(Time* a)
{
	puts("\n Hey ur Entered Details are");
	puts("........................................................................");
	printf(" Hours|Minutes|Seconds:");
	printf("\n %d      %d      %d",a->hours,a->mins,a->seconds);
	
}

