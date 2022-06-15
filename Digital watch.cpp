#include<stdio.h>
#include<windows.h>
#include<conio.h>
int main()
{
	int h=0,m=0,s=0,y=0,M=0,D=0;
	 double i;
	system("cls");
	printf("**********WELCOME TO DIGITAL WATCH************");
	printf("\n\nplease set the watch:hh/mm/ss");
	scanf("%d%d%d",&h,&m,&s);
	printf("\nplease set the date:yyyy/MM/DD");
	scanf("%d%d%d",&y,&M,&D);
	start:
	for(h;h<24;h++)
	{
		for(m;m<60;m++)
		{
			for(s;s<60;s++)
			{
				system("cls");
				printf("Time-%d:%d:%d",h,m,s);
				
				if(h>12)
				{
					printf("PM");
				}
				else{
					printf("AM");
				}
				printf("\nDate-%d:%d:%d",y,M,D);
				printf("\n\t-created by Pankaj Shah");
				Beep(500,300);
				for(i=0;i<250000000;i++)
				i++;
				i--;
			}
			s=0;
		}
		m=0;
	}
	if(h>23)
	{
		D++;
	}
	if(D>30)
	{
		M++;
		D=1;
	}
	if(M>12)
	{
		y++;
		M=1;
	}
h=0;
	
	goto start;
	getch();
	return 0;
}


