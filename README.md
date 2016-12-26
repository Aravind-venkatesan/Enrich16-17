
#include<iostream.h>
#include<conio.h>
void main()
{
	int sum=0,num,r,dig=0;
	cout<<"enter the number";
	cin>>num;
	while(num>0)
	{
		r=num%10;
		sum=sum+r;
		dig++;
		num=num/10;
	}
	cout<<"\nsum is "<<sum;
	cout<<"\nnumber of digits are "<<dig;
	getch();
}
