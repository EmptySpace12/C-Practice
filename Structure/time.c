#include<stdio.h>
#include<string.h>

typedef struct Time
{
	int hour,minute,second;
}Time;

void display(Time*);
void store(Time*);
void add(Time*,Time);
void main()
{
	
	//puts("Enter number of data u want to calu:");
	//scanf("%d",&n);
	Time a[2],a2;
	store(a);
	display(a);
	add(a,a2);
}
void store(Time* a)
{
	int i,th,tm,ts;
	for(i=0;i<2;i++)
	{
	printf("\nEnter the Time  Hour:");
	scanf("%d",&a[i].hour);
	printf("\nEnter the Time  Minute:");
	scanf("%d",&a[i].minute);
	printf("\nEnter the Time  Second:");
	scanf("%d",&a[i].second);
	}
}
void display(Time * a)
{
	int i;
	for(i=0;i<2;i++)
	{
		printf("\n%d : %d : %d : ",a[i].hour,a[i].minute,a[i].second);
	
	}
}
void add(Time* t1,Time t2)
{
	int i=0;
	t2.hour=t1[i].hour+t1[i+1].hour;
	t2.minute=t1[i].minute+t1[i+1].minute;
	t2.second=t1[i].second+t1[i+1].second;
	if(t2.minute>59)
	{
		t2.hour++;
		t2.minute=t1[i].minute-60;
		
	}
	if(t2.second>59)
	{
		t2.minute++;
		t2.second=t1[i].second-60;
		
	}
		printf("\n%d : %d : %d : ",t2.hour,t2.minute,t2.second);
	
}
	




