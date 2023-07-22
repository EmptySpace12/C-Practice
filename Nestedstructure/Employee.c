#include<stdio.h>
#include<string.h>
typedef struct Date
{
	int day;
	int month;
	int year;
	
	
}Date;

typedef struct Employee

{
	int id;
	char name[100];
	double salary;
	Date dob;
	Date doj;
	Date dol;
}Employee;

void main()
{
	Employee e,e1;
	//e hardcoded
	e.id=1;
	strcpy(e.name,"Tony Stark");
	e.salary=120000.29;
	e.dob.day=26;
	e.dob.month=04;
	e.dob.year=1999;
	e.doj.day=11;
	e.doj.month=02;
	e.doj.year=2021;
	e.dol.day=00;
	e.dol.year=00;
	e.dol.month=00;	
	printf("___________________________________________________________________________");
	printf("\nHard Coded Data of Employee");
	printf("\n___________________________________________________________________________");
	printf("\nEmployee Details");
	printf("\n___________________________________________________________________________");
	printf("\nEmployee id:%d",e.id);
	printf("\nEmployee Name:%s",e.name);
	printf("\nEmployee id:%.2lf Rupees/-",e.salary);
	printf("\n___________________________________________________________________________");
	printf("\nEmployee Date of Birth:\nDay:%d\nMonth:%d\nYear:%d ",e.dob.day,e.dob.month,e.dob.year);
	printf("\n___________________________________________________________________________");
	printf("\nEmployee Date of Joining:\nDay:%d\nMonth:%d\nYear:%d ",e.doj.day,e.doj.month,e.doj.year);
	printf("\n___________________________________________________________________________");
	printf("\nEmployee Date of Leaving:\nDay:%d\nMonth:%d\nYear:%d ",e.dol.day,e.dol.month,e.dol.year);
	printf("\n___________________________________________________________________________");
	//e1 from user
	printf("\nHey Answer below Question to Enter data Manually");
	printf("\n___________________________________________________________________________");
	
	printf("\nEnter Employee id:");
	scanf("%d",&e1.id);
	fflush(stdin);
	printf("\nEnter Employee Name:");
	gets(e1.name);
	fflush(stdin);
	printf("\nEnter Employee Salary:");
	scanf("%lf",&e1.salary);
	printf("\n___________________________________________________________________________");
	puts("\nEnter Employ Date of Birth:");
	printf("\n___________________________________________________________________________");
	printf("\nDay:");
	scanf("%d",&e1.dob.day);
	printf("\nMonth:");
	scanf("%d",&e1.dob.month);
	printf("\nYear:");
	scanf("%d",&e1.dob.year);
	printf("\n___________________________________________________________________________");
	printf("\nEmployee Date of Joining:");
	printf("\n___________________________________________________________________________");
	printf("\nDay:");
	scanf("%d",&e1.doj.day);
	printf("\nMonth:");
	scanf("%d",&e1.doj.month);
	printf("\nYear:");
	scanf("%d",&e1.doj.year);
	printf("\n___________________________________________________________________________");
	printf("\nEmployee Date of Joining:");	
	printf("\n___________________________________________________________________________");
	printf("\nDay:");
	scanf("%d",&e1.dol.day);
	printf("\nMonth:");
	scanf("%d",&e1.dol.month);
	printf("\nYear:");
	scanf("%d",&e1.dol.year);
	
	printf("\n___________________________________________________________________________");
	printf("Hey ur Entered Data is:");
	printf("\n___________________________________________________________________________");
	printf("Employee id:%d",e1.id);
	printf("Employee Name:%s",e1.name);
	printf("Employee id:%.2lf Rupees/-",e1.salary);
	printf("\n___________________________________________________________________________");
	printf("Employee Date of Birth:\nDay:%d\nMonth:%d\nYear:%d",e1.dob.day,e1.dob.month,e1.dob.year);
	printf("\n___________________________________________________________________________");
	printf("Employee Date of Joining:\nDay:%d\nMonth:%d\nYear:%d",e1.doj.day,e1.doj.month,e1.doj.year);
	printf("\n___________________________________________________________________________");
	printf("Employee Date of Leaving:\nDay:%d\nMonth:%d\nYear:%d",e1.dol.day,e1.dol.month,e1.dol.year);
	printf("\n___________________________________________________________________________");
	
}
