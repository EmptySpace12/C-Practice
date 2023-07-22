#include<stdio.h>
#include<string.h>
typedef struct HR
{
	char name[50];
	int  id;
	double salary;
	double commission;
	
	
}HR;
void store(HR*);
void display(HR*);

void main()
{
	HR hr1;
	store(&hr1);	
	display(&hr1);
		
}
void store(HR* hr1)
{

	puts("........Hey Answer The Below Question.........");

	puts("........................................................................");
	printf("Enter Name of The HR   :");	
	scanf("%s",&hr1->name);
	fflush(stdin);	
	printf("Enter Id Number of HR  :");	
	scanf("%d",&hr1->id);
	printf("Enter Salary of HR     :");	
	scanf("%lf",&hr1->salary);
	printf("Enter Commission of HR :");	
	scanf("%lf",&hr1->commission);
	

	fflush(stdin);
	
}
void display(HR* a)
{
	puts("\n Hey ur Entered Details are");
	puts("........................................................................");
	printf("HR Name       :%s",a->name);	
	printf("\nHR Id number  :%d",a->id);
	printf("\nHR salary     :%.2lf Rupees/Month /-",a->salary);	
	printf("\nHR Commission :%.2lf Rupees/Month /-",a->commission);	
	
	
}

