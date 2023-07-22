#include<stdio.h>
#include<string.h>
typedef struct Employee
{
	int eid;
	char edesignation[100];
	char ename[100];
	
	
}Employee;

typedef struct Sector

{
	char sectorname[100];
	char companyname[100];
	Employee e1,s1;
	
	
}Sector;

void main()
{
//store//
	
	Sector s;
	printf("\nHey Answer below Question to Enter data Manually");
	printf("\n___________________________________________________________________________");
	printf("\nEmployee id					:");
	scanf("%d",&s.e1.eid);
	fflush(stdin);
	printf("\nEmployee Name					:");
	scanf("%[^\n]s",&s.e1.ename);
	fflush(stdin);
	printf("\nEmployee Designation			:");
	scanf("%[^\n]s",&s.e1.edesignation);
	fflush(stdin);
	printf("\n___________________________________________________________________________");
	printf("\nEmployee id					:");
	scanf("%d",&s.s1.eid);
	fflush(stdin);
	printf("\nEmployee Name					:");
	scanf("%[^\n]s",&s.s1.ename);
	fflush(stdin);
	printf("\nEmployee Designation			:");
	scanf("%[^\n]s",&s.s1.edesignation);
	fflush(stdin);
	printf("\nEmployee Sector				:");
	scanf("%[^\n]s",&s.sectorname);
	fflush(stdin);
	printf("\nEmployee Company Name			:");
	scanf("%[^\n]s",&s.companyname);
	fflush(stdin);
	
	

//display//

	printf("___________________________________________________________________________");
	printf("\nYour Entered Data for Employess:");
	printf("\n___________________________________________________________________________");
	printf("\nEmployee id					:%d",s.e1.eid);
	printf("\nEmployee Name                 :%s",s.e1.ename);
	printf("\nEmployee	Desgination			:%s",s.e1.edesignation);
	printf("\n___________________________________________________________________________");
	printf("\nEmployee id					:%d",s.s1.eid);
	printf("\nEmployee Name                 :%s",s.s1.ename);
	printf("\nEmployee	Desgination			:%s",s.s1.edesignation);
	printf("\nEmployee Company Sector       :%s",s.sectorname);
	printf("\nEmployee Company Name 		:%s",s.companyname);
	
	
}
