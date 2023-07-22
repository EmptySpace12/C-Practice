#include<stdio.h>
#include<string.h>
typedef struct Watch
{
	int price;
	char colour[100];
	char brand[100];
	
	
}Watch;

typedef struct Quality

{
	char type[100];
	char quality[100];
	Watch w,q1;
	
}Quality;

void main()
{
//store//
	
	Quality q;
	printf("\nHey Answer below Question to Enter data Manually");
	printf("\n___________________________________________________________________________");
	printf("\nPrice of Watch	:");
	scanf("%d",&q.w.price);
	fflush(stdin);
	printf("\nBrand Name		:");
	scanf("%[^\n]s",&q.w.brand);
	fflush(stdin);
	printf("\nColour			:");
	scanf("%[^\n]s",&q.w.colour);
	fflush(stdin);
	printf("\n___________________________________________________________________________");
	printf("\nPrice of Watch    :");
	scanf("%d",&q.q1.price);
	fflush(stdin);
	printf("\nBrand Name		:");
	scanf("%[^\n]s",&q.q1.brand);
	fflush(stdin);
	printf("\nColour			:");
	scanf("%[^\n]s",&q.q1.colour);
	fflush(stdin);
	
	printf("\nWatch quality      :");
	scanf("%[^\n]s",&q.quality);
	fflush(stdin);
	printf("\nWatch type		 :");
	scanf("%[^\n]s",&q.type);
	fflush(stdin);
	
	

//display//

	printf("___________________________________________________________________________");
	printf("\nYour Entered Data for Watch:");
	printf("\n___________________________________________________________________________");
	printf("\nPrice				:%d",q.w.price);
	printf("\nBrand  	        :%s",q.w.brand);
	printf("\nColour			:%s",q.w.colour);
	printf("\n___________________________________________________________________________");
	printf("\nPrice				:%d",q.q1.price);
	printf("\nBrand  	        :%s",q.q1.brand);
	printf("\nColour			:%s",q.q1.colour);
	printf("\nQuality   	   	:%s",q.quality);
	printf("\nType 				:%s",q.type);
	
}
