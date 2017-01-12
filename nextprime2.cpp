#include <iostream>
using namespace std;
int main() 
{
	int num,i,ans,f=0;
	cout<<"enter the number";
	cin>>num;
	ans=num+1;
	while(f!=2)
	{
	    for(i=2;i<=ans;i++)
	    {
	        if(ans%i==0)
	        {
	            break;
	        }
	    }
		if(i==ans)
		{
			cout<<ans;
			f=2;
		}
		ans++;
	}
	return 0;
}


