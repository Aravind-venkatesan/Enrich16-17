#include <iostream>
using namespace std;

int main() 
{
    int num,sh,i=10000,r;
    cout<<"enter";
    cin>>num>>sh;
    sh=sh%5;
    while(sh!=1)
    {
        i=i/10;
        sh--;
    }
    r=num%i;
    num=num/i;
    num=(r*(100000/i))+num;
    
    cout<<num;
}
