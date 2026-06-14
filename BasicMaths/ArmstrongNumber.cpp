#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    int org=n;
    int cnt=0,sum=0;
    while(n>0)
    {
        cnt=cnt+1;
        n=n/10;
    }
    n=org;
    while(n>0)
    {
        int dig=n%10;
        sum=sum+pow(dig,cnt);
        n=n/10;
    }
    n=org;
    if(sum==n)
    {
        cout<<"it is an armstrong number";
    }
    else{

        cout<<"it is not an armstrong number";
    }
    
}