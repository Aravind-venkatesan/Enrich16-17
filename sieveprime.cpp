#include <iostream>
#include<math.h>
using namespace std;
int main()
{
    int t,ind,num,i,j;
	cin>>num;
	ind=num+20;
	t=sqrt(ind);
	int a[ind];
	for(i=2;i<=t;i++)
	{
		if(a[i]!=0)
		{
			for(j=i;j<ind;j=j+i)
			{
				if(a[j]!=0)
				{
					a[j]=0;
				}
			}
		}
	}
	for(i=num+1;;i++)
	{
		if(a[i]!=0)
		{
			cout<<i;
			break;
		}
	}
	return 0;
}
