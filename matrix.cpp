#include<iostream>
using namespace std;
int main()
{
	int a[50][50],m,n,k;
	cout<<"enter rows and columns";
	cin>>m>>n>>k;
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if((i+j)==k)
			{
				a[i][j]=1;
			}
			else
			{
				a[i][j]=0;
			}
		}
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<a[i][j]<<"\t";
		}
	cout<<"\n";
	}
}
