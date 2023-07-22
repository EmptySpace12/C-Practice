#include<stdio.h>
#include<string.h>
typedef struct student
{
	char name[50];
	char gender[50];
	float  marks;
	int rollnum;
	
}student;
void store(student*,int);
void display(student*,int);

void main()
{
	int n,i;
	
	puts("Enter Numbers of Entry u want for Student:");
	scanf("%d",&n);
	student arr[n];
	store(arr,n);	
	display(arr,n);
	
	
}
void store(student* arr,int n)
{
	int i;
	puts("........Hey Answer The Below Question.........");
	for(i=0;i<n;i++)
	{
	puts("........................................................................");
	printf("Enter Name of The Student %d      :",i+1);	
	scanf("%s",&arr[i].name);	
	printf("Enter Roll Number of Student %d   :",i+1);	
	scanf("%d",&arr[i].rollnum);

	printf("Enter Gender of Student %d        :",i+1);	
	scanf("%s",&arr[i].gender);	
	printf("Enter Marks of Student %d       :",i+1);	
	scanf("%f",&arr[i].marks);
	fflush(stdin);
	}
}
void display(student* a,int n)
{
	puts("\n Hey ur Entered Details are");
	
	int i;
	for(i=0;i<n;i++)
	{
	puts("\n........................................................................");
	printf("\nStudent %d Name            :%s",i+1,a[i].name);	
	printf("\nStudent %d Roll number     :%d",i+1,a[i].rollnum);
	printf("\nStudent %d Gender          :%s",i+1,a[i].gender);	
	printf("\nStudent %d Marks           :%.2f %%",i+1,a[i].marks);	
	
	}
}

