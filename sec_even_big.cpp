#include <iostream>
using namespace std;
int second_big(int a[],int n)
{
	int s_big=-1,f_big=-1,t;
	for(int i=0;i<n;i++)
	{
		if((a[i]>s_big) && (a[i]%2==0) && (a[i]!=s_big) && (a[i]!=f_big))
		{
			s_big=a[i];
			if(s_big>f_big)
			{
				t=f_big;
				f_big=s_big;
				s_big=t;
			}
		}
	}
	return s_big;
}
int main() 
{
	int in[100],n,res;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>in[i];
	}
	res=second_big(in,n);
	if(res==-1)
	{
		cout<<"There is no second biggest positive even number";
	}
	else
	{
		cout<<"Second biggest even number is "<<res;
	}
	return 0;
}
