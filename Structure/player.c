#include<stdio.h>
#include<string.h>
typedef struct player
{
	char name[50];
	//char num[50];
	int  num;
	int runs;
	int wickets;	
	
}player;
void store(player*,int);
void display(player*,int);
void maxrun_wicket(player*,int);

void main()
{
	int n,i;
	
	puts("Enter Numbers of Entry u want for Players:");
	scanf("%d",&n);
	player arr[n];
	store(arr,n);	
	display(arr,n);
	maxrun_wicket(arr,n);
	
	
}
void store(player* arr,int n)
{
	int i;
	puts("........Hey Answer The Below Question.........");
	for(i=0;i<n;i++)
	{
	puts("........................................................................");
	printf("Enter Name of The Player %d         :",i+1);	
	scanf("%s",&arr[i].name);	
	printf("Enter Jersey Number of player%d     :",i+1);	
	scanf("%d",&arr[i].num);

	printf("Enter Runs By Player %d             :",i+1);	
	scanf("%d",&arr[i].runs);	
	printf("Enter Wickets By player %d          :",i+1);	
	scanf("%d",&arr[i].wickets);
	//fflush(stdin);
	}
}
void display(player* a,int n)
{
	puts("\n Hey ur Entered Details are");
	
	int i;
	for(i=0;i<n;i++)
	{
	puts("\n........................................................................");
	printf("\nPlayer %d Name            :%s",i+1,a[i].name);	
	printf("\nPlayer %d Jersey Number   :%d",i+1,a[i].num);
	printf("\nPlayer %d Runs            :%d",i+1,a[i].runs);	
	printf("\nPlayer %d Wickets         :%d",i+1,a[i].wickets);	
	
	}
}
void maxrun_wicket(player* a,int n)
{
	int i,maxrun,maxwicket;
	maxrun=a[0].runs;
	maxwicket=a[0].wickets;
	for(i=0;i<n;i++)
	{
		if(a[i].runs>maxrun)
		{
			maxrun=a[i].runs;
		}
	}
	for(i=0;i<n;i++)
	{
		if(maxrun==a[i].runs)
		{
			puts("\n........................................................................");
			puts("\n........Most run By Player is Mentioned Below:.........");
			
			printf("\nPlayer %d Name            :%s",i+1,a[i].name);	
			printf("\nPlayer %d Jersey Number   :%d",i+1,a[i].num);
			printf("\nPlayer %d Runs            :%d",i+1,a[i].runs);	
			printf("\nPlayer %d Wickets         :%d",i+1,a[i].wickets);	
		}
	}
	
	for(i=0;i<n;i++)
	{
		if(a[i].wickets>maxwicket)
		{
			maxwicket=a[i].wickets;
		}
	}
	for(i=0;i<n;i++)
	{
		if(maxwicket==a[i].wickets)
		{
			puts("\n........................................................................");
			puts("\n........Most Wicket By Player is Mentioned Below:.........");
			
			printf("\nPlayer %d Name            :%s",i+1,a[i].name);	
			printf("\nPlayer %d Jersey Number   :%d",i+1,a[i].num);
			printf("\nPlayer %d Runs            :%d",i+1,a[i].runs);	
			printf("\nPlayer %d Wickets         :%d",i+1,a[i].wickets);	
		}
	}

}

