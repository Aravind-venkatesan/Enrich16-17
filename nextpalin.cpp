#include <iostream>
using namespace std;
int main() 
{
	int num,temp,temp1,dig=0,ans,t,i=1,j,r;
	cout<<"enter the number";
	cin>>num;
	temp=num;
	while(temp!=0)
	{
		temp=temp/10;
		dig++;
	}
	if(dig%2==0)
	{
		t=dig/2;
	}
	else
	{
		t=(dig/2)+1;
	}
	for(j=0;j<t;j++)
	{
		i=i*10;
	}
	if(dig%2==0)
	{
		ans=num/i;
		temp=ans;
	}
	else
	{
		ans=(num*10)/i;
		temp=ans/10;
	}
	temp1=ans;
	while(ans<num)
	{
		while(temp!=0)
		{
			r=temp%10;
			temp=temp/10;
			ans=(ans*10)+r;
		}
		if(ans<num)
		{
			t=temp1%10;
			temp1=temp1/10;
			temp=(temp1*10)+(t+1);
			ans=temp;
			if(dig%2!=0)
			{
				temp=ans/10;
			}
		}
	}
	cout<<ans;	
	return 0;
}
