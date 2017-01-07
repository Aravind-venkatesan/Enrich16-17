#include <iostream>
using namespace std;
int main() {
    int num=0;
    float avg,ans,t=0,t1;
    cin>>num;
    t1=num;
    while(num!=ans)
    {
        avg=(t+t1)/2;
        ans=avg*avg;
        if(ans>num)
        {
            t1=avg;
        }
        else
        {
            t=avg;
        }
    }
    cout<<"\n"<<avg;
	// your code goes here
	return 0;
}
