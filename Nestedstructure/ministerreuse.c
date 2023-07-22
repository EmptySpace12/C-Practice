#include<stdio.h>
#include<string.h>
typedef struct Minister
{
	int age;
	char mname[100];
	char state[100];
	
	
}Minister;

typedef struct Sector

{
	char sectorname[100];
	char partyname[100];
	Minister m1,s1;
	
	
}Sector;

void main()
{
//store//
	
	Sector s;
	printf("\nHey Answer below Question to Enter data Manually");
	printf("\n___________________________________________________________________________");
	printf("\nMinister Age				:");
	scanf("%d",&s.m1.age);
	fflush(stdin);
	printf("\nMinister Name				:");
	scanf("%[^\n]s",&s.m1.mname);
	fflush(stdin);
	printf("\nMinister state			:");
	scanf("%[^\n]s",&s.m1.state);
	fflush(stdin);
	printf("\n___________________________________________________________________________");
	printf("\nMinister Age				:");
	scanf("%d",&s.s1.age);
	fflush(stdin);
	printf("\nMinister Name				:");
	scanf("%[^\n]s",&s.s1.mname);
	fflush(stdin);
	printf("\nMinister state			:");
	scanf("%[^\n]s",&s.s1.state);
	fflush(stdin);
	printf("\nMinistery Sector			:");
	scanf("%[^\n]s",&s.sectorname);
	fflush(stdin);
	printf("\nMinister Party Name		:");
	scanf("%[^\n]s",&s.partyname);
	fflush(stdin);
	
	

//display//

	printf("___________________________________________________________________________");
	printf("\nYour Entered Data for Minister:");
	printf("\n___________________________________________________________________________");
	printf("\nMinister Age				:%d",s.m1.age);
	printf("\nMinister Name             :%s",s.m1.mname);
	printf("\nMinister	State			:%s",s.m1.state);
	printf("\n___________________________________________________________________________");
	printf("\nMinister Age				:%d",s.s1.age);
	printf("\nMinister Name             :%s",s.s1.mname);
	printf("\nMinister	State			:%s",s.s1.state);
	printf("\nMinistery Sector       	:%s",s.sectorname);
	printf("\nMinister Party Name 		:%s",s.partyname);
	
	
}
