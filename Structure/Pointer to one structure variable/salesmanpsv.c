#include<stdio.h>
#include<string.h>
typedef struct SalesManager
{
	char name[50];
	int  id;
	double salary;
	double incentive;
	int target;
	
	
}SalesManager;
void store(SalesManager*);
void display(SalesManager*);

void main()
{
	SalesManager sm1;
	store(&sm1);	
	display(&sm1);
		
}
void store(SalesManager* sm1)
{

	puts("........Hey Answer The Below Question.........");

	puts("........................................................................");
	printf("Enter Name of The Sales Manager   :");	
	gets(&sm1->name);
	fflush(stdin);	
	printf("Enter Id Number of Sales Manager  :");	
	scanf("%d",&sm1->id);
	printf("Enter Salary of Sales Manager     :");	
	scanf("%lf",&sm1->salary);
	printf("Enter Incentives of Sales Manager :");	
	scanf("%lf",&sm1->incentive);
	printf("Enter Targetof Sales Manager      :");	
	scanf("%d",&sm1->target);
	
}
void display(SalesManager* a)
{
	puts("\n Hey ur Entered Details are");
	puts("........................................................................");
	printf("Sales Manager  Name       :%s",a->name);	
	printf("\nSales Manager  Id number  :%d",a->id);
	printf("\nSales Manager  salary     :%.2lf Rupees/Months /-",a->salary);	
	printf("\nSales Manager  Incentive  :%.2lf Rupees/Months /-",a->incentive);	
	printf("\nSales Manager  Target     :%d",a->target);	
	
	
}

