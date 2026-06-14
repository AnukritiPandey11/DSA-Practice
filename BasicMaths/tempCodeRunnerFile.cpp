#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    int y=n;
    int x=n;
    int cnt=0,sum=0;
    while(n>0)
    {
        cnt=cnt+1;
        n=n/10;
    }
    while(y>0)
    {
        int dig=y%10;
        sum=sum+pow(dig,cnt);
        y=y/10;
    }
    if(sum==x)
    {
        cout<<"it is an armstrong number";
    }
    cout<<"it is not an armstrong number";
}