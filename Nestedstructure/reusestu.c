#include<stdio.h>
#include<string.h>
typedef struct Student
{
	int fbid;
	int fbbatchid;
	char sname[100];
	float distance;
	
	
}Student;

typedef struct PlacedStudent

{
	int companyid;
	char companyname[100];
	char companydesignation[100];
	Student s1,ps;
	
	
}PlacedStudent;

void main()
{
	
	PlacedStudent s;
	
	//student hardcoded
	
	s.s1.fbid=2;
	s.s1.fbbatchid=123;
	strcpy(s.s1.sname,"Robbin");
	s.s1.distance=512.2;
	
	s.ps.fbid=11;
	s.ps.fbbatchid=111;
	s.ps.distance=502.2;
	strcpy(s.ps.sname,"Ram");
	s.companyid=121;
	strcpy(s.companyname,"TCS");
	strcpy(s.companydesignation,"Software Engineer");

	printf("___________________________________________________________________________");
	printf("\nHard Coded Data of FirstBit Student:");
	printf("\n___________________________________________________________________________");
	printf("\nStudent Details");
	printf("\n___________________________________________________________________________");
	printf("\nStudent id		 	:%d",s.s1.fbid);
	printf("\nStudent Batch id   	:%d",s.s1.fbbatchid);
	printf("\nStudent Name		 	:%s",s.s1.sname);
	printf("\nDistance Travelled 	:%.2f km",s.s1.distance);
	
	printf("\nPlaced Student Details");
	printf("\n___________________________________________________________________________");
	fflush(stdin);
	printf("\nStudent Id			:%d",s.ps.fbid);
	fflush(stdin);
	printf("\nStudent Batch Id   	:%d",s.ps.fbbatchid);
	fflush(stdin);
	printf("\nStudent Name		 	:%s",s.ps.sname);
	fflush(stdin);
	printf("\nDistance Travelled 	:%.2f km",s.ps.distance);
	fflush(stdin);
	printf("\nCompany  Id   		:%d",s.companyid);
	fflush(stdin);
	printf("\ncompany Name		 	:%s",s.companyname);
	fflush(stdin);
	printf("\nDesignation	 		:%s",s.companydesignation);
	fflush(stdin);

	//student from user
	printf("\n___________________________________________________________________________");
	printf("\n**************FirstBit Karwa 2023*************");
	printf("\n___________________________________________________________________________");
	printf("\nHey Answer below Question to Enter data Manually");
	printf("\n___________________________________________________________________________");
	printf("\nStudent id					:");
	scanf("%d",&s.s1.fbid);
	printf("\nStudent Batchid				:");
	scanf("%d",&s.s1.fbbatchid);
	fflush(stdin);
	printf("\nStudent Name					:");
	scanf("%[^\n]s",&s.s1.sname);
	fflush(stdin);
	printf("\nStudent Distance Travelled	:");
	gets(&s.s1.distance);
	
	printf("\n___________________________________________________________________________");
	printf("\n***\t\tPlaced Student Section\t\t*** ");
	printf("\n___________________________________________________________________________");
	printf("\nHey Answer below Question to Enter data Manually");
	printf("\n___________________________________________________________________________");
	printf("\nStudent id					:");
	scanf("%d",&s.ps.fbid);
	printf("\nStudent Batchid				:");
	scanf("%d",&s.ps.fbbatchid);
	fflush(stdin);
	printf("\nStudent Name					:");
	scanf("%[^\n]s",&s.ps.sname);
	fflush(stdin);
	printf("\nStudent Distance Travelled	:");
	gets(&s.ps.distance);
	
	printf("\nStudent Company id		:");
	scanf("%d",&s.companyid);
	fflush(stdin);
	printf("\n\nStudent Company Name	:");
	scanf("%[^\n]s",&s.companyname);
	fflush(stdin);
	printf("\nStudent Name				:");
	scanf("%[^\n]s",&s.companydesignation);
	fflush(stdin);
	
	printf("___________________________________________________________________________");
	printf("\nYour Entered Data for FirstBit Student:");
	printf("\n___________________________________________________________________________");
	printf("\nStudent Details");
	printf("\n___________________________________________________________________________");
	printf("\nStudent id					:%d",s.s1.fbid);
	printf("\nStudent Batchid				:%d",s.s1.fbbatchid);
	printf("\nStudent Name                  : %s",s.s1.sname);
	printf("\nDistance Travelled By Student :%.2f km",s.s1.distance);
	printf("\n___________________________________________________________________________");
	printf("\nPlaced Student Details");
	printf("\n___________________________________________________________________________");
	printf("\nStudent id					:%d",s.ps.fbid);
	printf("\nStudent Batchid				:%d",s.ps.fbbatchid);
	printf("\nStudent Name                  : %s",s.ps.sname);
	printf("\nDistance Travelled By Student :%.2f km",s.s1.distance);
	printf("\n___________________________________________________________________________");
	printf("\n\t\t\tStudent Company Details");
	printf("\n___________________________________________________________________________");
	printf("\nStudent Company id          :%d",s.companyid);
	printf("\nStudent Company Name        :%s",s.companyname);
	printf("\nStudent Company Designation :%s",s.companydesignation);
	
	
}
