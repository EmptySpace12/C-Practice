#include<stdio.h>
#include<string.h>
typedef struct employ
{
	char name[50];
	int  id;
	double salary;
	
}employ;
void store(employ*);
void display(employ*);

void main()
{
	employ e1;
	store(&e1);	
	display(&e1);
		
}
void store(employ* e1)
{

	puts("........Hey Answer The Below Question.........");

	puts("........................................................................");
	printf("Enter Name of The Employ  :");	
	scanf("%s",&e1->name);
	fflush(stdin);	
	printf("Enter Id Number of Employ :");	
	scanf("%d",&e1->id);

	printf("Enter Salary of Employ    :");	
	scanf("%lf",&e1->salary);
	fflush(stdin);
	
}
void display(employ* a)
{
	puts("\n Hey ur Entered Details are");
	puts("........................................................................");
	printf("Employ  Name       :%s",a->name);	
	printf("\nEmploy  Id number  :%d",a->id);
	printf("\nEmploy  salary     :%.2lf Rupees/month /-",a->salary);	
	
	
}

