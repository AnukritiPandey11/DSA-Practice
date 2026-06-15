//my approach
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n1, n2,n;
    int i=0,max=0;
    cout<<"Enter the First Number"<<endl;
    cin>>n1;
    cout<<"Enter the second number"<<endl;
    cin>>n2;
    if(n2>n1)
    {
        n=n1;
    }
    else{
        n= n2;
    }
    for(i=1;i<=n;i++)
    {
        if(n1%i==0 && n2%i==0)
        {
            if(max<i)
            {
                max=i;
            }
        }
    }
    cout<<"THE GCD is "<<max<<endl;
}