#include<iostream>
using namespace std;

int main()
{
    int n,i;
    int cnt=0;

    cout<<"Enter the number"<<endl;
    cin>>n;

    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            cnt++;
        }
    }

    if(cnt==2)
    {
        cout<<"true";
    }
    else
    {
        cout<<"false";
    }

    return 0;
}
    
   