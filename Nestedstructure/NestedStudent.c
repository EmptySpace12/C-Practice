#include<stdio.h>
#include<string.h>
typedef struct Student
{
	int fbid;
	int fbbatchid;
	char sname[50];
	float distance;;
	
	
}Student;

typedef struct PlacedStudent

{
	int companyid;
	char companyname[100];
	char companydesignation;
	Student s,s1;
	
}PlacedStudent;

void main()
{
	Student s,s1;
	PlacedStudent p;
	
	//student hardcoded
	s.fbid=1;
	s.fbbatchid=121;
	strcpy(s.sname,"Ravi Zanke");
	s.distance=23.22;
	
	printf("___________________________________________________________________________");
	printf("\nHard Coded Data of FirstBit Student:");
	printf("\n___________________________________________________________________________");
	printf("\nStudent Details");
	printf("\n___________________________________________________________________________");
	printf("\nStudent id		 	:%d",s.fbid);
	printf("\nStudent Batch id   	:%d",s.fbid);
	printf("\nStudent Name		 	:%s",s.sname);
	printf("\nDistance Travelled 	:%.2f km",s.distance);
	
	//student from user
	printf("\n___________________________________________________________________________");
	printf("\n**************FirstBit Karwa 2023*************");
	printf("\n___________________________________________________________________________");
	printf("\nHey Answer below Question to Enter data Manually");
	printf("\n___________________________________________________________________________");
	printf("\nStudent id					:");
	scanf("%d",&s1.fbid);
	printf("\nStudent Batchid				:");
	scanf("%d",&s1.fbbatchid);
	fflush(stdin);
	printf("\nStudent Name					:");
	scanf("%[^\n]s",&s1.sname);
	fflush(stdin);
	printf("\nStudent Distance Travelled	:");
	gets(&s1.distance);
	
	printf("\n___________________________________________________________________________");
	printf("\n***\t\tPlaced Student Section\t\t*** ");
	printf("\n___________________________________________________________________________");
	printf("\nHey Answer below Question to Enter data Manually");
	printf("\n___________________________________________________________________________");
	printf("\nStudent Company id		:");
	scanf("%d",&p.companyid);
	fflush(stdin);
	printf("\n\nStudent Company Name	:");
	scanf("%[^\n]s",&p.companyname);
	fflush(stdin);
	printf("\nStudent Name				:");
	scanf("%[^\n]s",&p.companydesignation);
	fflush(stdin);
	
	printf("___________________________________________________________________________");
	printf("\nYour Entered Data for FirstBit Student:");
	printf("\n___________________________________________________________________________");
	printf("\nStudent Details");
	printf("\n___________________________________________________________________________");
	printf("\nStudent id					:%d",s1.fbid);
	printf("\nStudent Batchid				:%d",s1.fbbatchid);
	printf("\nStudent Name                  : %s",s1.sname);
	printf("\nDistance Travelled By Student :%.2f km",s1.distance);
	
	printf("\n___________________________________________________________________________");
	printf("\n\t\t\tStudent Company Details");
	printf("\n___________________________________________________________________________");
	printf("\nStudent Company id          :%d",p.companyid);
	printf("\nStudent Company Name        :%s",p.companyname);
	printf("\nStudent Company Designation :%s",p.companydesignation);
	
}
