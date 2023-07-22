#include<stdio.h>
#include<string.h>
typedef struct book
{
	char bname[50];
	char author[50];
	float price;
	float id;	
	
}book;
void store(book*,int);
void display(book*,int);
void main()
{
	int n,i;
	puts("Enter Numbers of Entry u want for Books:");
	scanf("%d",&n);
	book arr[n];
	store(arr,n);
	display(arr,n);
	
}
void store(book* arr,int n)
{
	int i;
	puts("........Hey Answer The Below Question.........");
	for(i=0;i<n;i++)
	{
	puts("........................................................................");
	printf("Enter Name of The Book %d         :",i+1);	
	scanf("%s",&arr[i].bname);	
	printf("Enter id Number of book %d        :",i+1);	
	scanf("%f",&arr[i].id);
	fflush(stdin);	
	printf("Enter Name of Author for book %d  :",i+1);	
	gets(arr[i].author);	
	printf("Enter Price  of book %d           :",i+1);	
	scanf("%f",&arr[i].price);
	
	}
}
void display(book* a,int n)
{
	puts("\n Hey ur Entered Details are");
	
	int i;
	for(i=0;i<n;i++)
	{
	puts("\n........................................................................");
	printf("\nBook %d Name       :%s",i+1,a[i].bname);	
	printf("\nBook %d Id         :%.2f",i+1,a[i].id);
	printf("\nBook %d Author     :%s",i+1,a[i].author);	
	printf("\nPrice Of Book %d   :%.2f Only/-",i+1,a[i].price);	
	
	}
}

