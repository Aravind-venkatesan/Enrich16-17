#include <iostream>
using namespace std;
int main()
{
	int a[15],num,size=0,lim,i,j;
	cout<<"enter the number";
	cin>>num;
	while(num>0)
	{
		a[size]=num%10;
		num=num/10;
		size++;
	}
	lim=size/2;
	for(i=0;i<=lim;i++)
	{
		if(a[i]>a[size-i-1])
		{
			a[i+1]=a[i+1]+1;
			j=i+1;
			while(a[j]==10)
			{
				a[j]=0;
				a[j+1]=a[j+1]+1;
				j++;
			}
			a[i]=a[size-i-1];
		}
		else
		{
			a[i]=a[size-i-1];
		} 
	}
	cout<<"\n";
	for(j=0;j<size;j++)
	{
		cout<<a[j];
	}
	return 0;
}
