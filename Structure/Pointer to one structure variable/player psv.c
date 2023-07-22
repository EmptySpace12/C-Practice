#include<stdio.h>
#include<string.h>
typedef struct student
{
	char name[50];
	char gender[50];
	float  marks;
	int rollnum;
	
}student;
void store(student*);
void display(student*);

void main()
{
	student s1;
	store(&s1);	
	display(&s1);
		
}
void store(student* s1)
{
	int i;
	puts("........Hey Answer The Below Question.........");

	puts("........................................................................");
	printf("Enter Name of The Student    :");	
	scanf("%s",&s1->name);
	fflush(stdin);	
	printf("Enter Roll Number of Student :");	
	scanf("%d",&s1->rollnum);

	printf("Enter Gender of Student      :");	
	scanf("%s",&s1->gender);
	fflush(stdin);	
	printf("Enter Marks of Student       :");	
	scanf("%f",&s1->marks);
	fflush(stdin);
	
}
void display(student* a)
{
	puts("\n Hey ur Entered Details are");
	puts("........................................................................");
	printf("Student  Name            :%s",a->name);	
	printf("\nStudent  Roll number     :%d",a->rollnum);
	printf("\nStudent  Gender          :%s",a->gender);	
	printf("\nStudent  Marks           :%.2f %%",a->marks);	
	
	
}

