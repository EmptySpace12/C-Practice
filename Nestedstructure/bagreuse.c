#include<stdio.h>
#include<string.h>
typedef struct Bags
{
	int price;
	char colour[100];
	char brand[100];
	
	
}Bags;

typedef struct Quality

{
	char type[100];
	char quality[100];
	Bags b,q1;
	
}Quality;

void main()
{
//store//
	
	Quality q;
	printf("\nHey Answer below Question to Enter data Manually");
	printf("\n___________________________________________________________________________");
	printf("\nPrice of Bag		:");
	scanf("%d",&q.b.price);
	fflush(stdin);
	printf("\nBrand Name		:");
	scanf("%[^\n]s",&q.b.brand);
	fflush(stdin);
	printf("\nColour			:");
	scanf("%[^\n]s",&q.b.colour);
	fflush(stdin);
	printf("\n___________________________________________________________________________");
	printf("\nPrice of Bag		:");
	scanf("%d",&q.q1.price);
	fflush(stdin);
	printf("\nBrand Name		:");
	scanf("%[^\n]s",&q.q1.brand);
	fflush(stdin);
	printf("\nColour			:");
	scanf("%[^\n]s",&q.q1.colour);
	fflush(stdin);
	
	printf("\nBags quality      :");
	scanf("%[^\n]s",&q.quality);
	fflush(stdin);
	printf("\nBag type			:");
	scanf("%[^\n]s",&q.type);
	fflush(stdin);
	
	

//display//

	printf("___________________________________________________________________________");
	printf("\nYour Entered Data for Bags:");
	printf("\n___________________________________________________________________________");
	printf("\nPrice				:%d",q.b.price);
	printf("\nBrand  	        :%s",q.b.brand);
	printf("\nColour			:%s",q.b.colour);
	printf("\n___________________________________________________________________________");
	printf("\nPrice				:%d",q.q1.price);
	printf("\nBrand  	        :%s",q.q1.brand);
	printf("\nColour			:%s",q.q1.colour);
	printf("\nQuality   	   	:%s",q.quality);
	printf("\nType 				:%s",q.type);
	
	
}
