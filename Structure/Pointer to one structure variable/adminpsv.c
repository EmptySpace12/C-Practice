#include<stdio.h>
#include<string.h>
typedef struct Admin
{
	char name[50];
	int  id;
	double salary;
	double allowance;
	
	
}Admin;
void store(Admin*);
void display(Admin*);

void main()
{
	Admin a1;
	store(&a1);	
	display(&a1);
		
}
void store(Admin* a1)
{

	puts("........Hey Answer The Below Question.........");

	puts("........................................................................");
	printf("Enter Name of The Admin   :");	
	scanf("%s",&a1->name);
	fflush(stdin);	
	printf("Enter Id Number of Admin  :");	
	scanf("%d",&a1->id);
	printf("Enter Salary of Admin     :");	
	scanf("%lf",&a1->salary);
	printf("Enter Allowances of Admin :");	
	scanf("%lf",&a1->allowance);
	

	fflush(stdin);
	
}
void display(Admin* a)
{
	puts("\n Hey ur Entered Details are");
	puts("........................................................................");
	printf("Admin  Name      :%s",a->name);	
	printf("\nAdmin Id number  :%d",a->id);
	printf("\nAdmin salary     :%.2lf Rupees/Month /-",a->salary);	
	printf("\nAdmin Allowance  :%.2lf Rupees/Month /-",a->allowance);	
	
	
}

