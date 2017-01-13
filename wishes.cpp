#include<iostream.h>
#include<dos.h>
#include<conio.h>
void main()
{
	char a[12]={'H','A','P','P','Y',' ','P','O','N','G','A','L'};
	int i;
	clrscr();
	for(i=0;i<12;i++)
	{
		cout<<a[i];
		delay(1000);
	}
	getch();
}

