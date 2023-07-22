#include<stdio.h>
#include<string.h>

typedef struct Time
{
	int hour,minute,second;
}Time;

void display(Time*,int);
void store(Time*,int);
void add(Time*,int);
void main()
{
	int n,r1,r2;
	puts("Enter number of Data u want to Enter for time:");
	scanf("%d",&n);
	Time a[n];
	store(a,n);
	display(a,n);
	add(a,n);
}
void store(Time* a,int n)
{
	//int i,th,tm,ts;
	
	int i;
	for(i=0;i<n;i++)
	{
	puts(".....................................................");
	printf("Enter the Time%d Hour   :",i+1);
	scanf("%d",&a[i].hour);
	printf("Enter the Time%d Minute :",i+1);
	scanf("%d",&a[i].minute);
	printf("Enter the Time%d Second :",i+1);
	scanf("%d",&a[i].second);
	}
}
void display(Time * t,int n)
{
	int i;
	puts(".............................................");
	printf("\nTime:Hours|Minutes|Seconds");
	
	for(i=0;i<n;i++)
	{
		
	printf("\n      %d  |   %d  |   %d  ",i+1,t[i].hour,t[i].minute,t[i].second);
	
	}
 
 }       
  void add(Time* t,int n) 
	{
	  int i1,i2;
	    int i ,hour=0,minute=0,second=0;
	    for(i=0;i<n;i++)
		{
	        hour = hour + t[i].hour;
	        minute = minute + t[i].minute;
	        second = second +t[i].second;    
	    }
	    if (minute>=60)
		{
	        hour = hour + minute/60.;
	        minute = minute%60;
	    }
	    if (second>=60)
		{
	        minute = minute + minute/60;
	        second = second%60;
	    }
	puts("\n....................................................");
	printf("\nTotal Time:\nHours |Minutes |Seconds");
	
	printf("\n %d        %d       %d   ",hour,minute,second);
	
	puts("\n....................................................");
	i=0;
	printf("\nAddition of Particular time");
	puts("\nEnter any two  Time  Number u want to Add in Particular:");
	scanf("%d%d",&i1,&i2);

	    
	    int hr=t[i1-1].hour+t[i2-1].hour;
	    int min=t[i1-1].minute+t[i2-1].minute;
	    int sec=t[i1-1].second+t[i2-1].second;
	    
		if(sec>59)
		{
			min=min+1;
			sec=sec-60;
			
		}
		if(min>59)
		{
			hr=hr+1;
			min=min-60;
			
		}
		printf("\nTotal of Particular Selected Time Number Entry:\nHours|Minutes|Seconds");    
	    printf("\n  %d      %d      %d   ",hr,min,sec);
	    
	}

	
	


