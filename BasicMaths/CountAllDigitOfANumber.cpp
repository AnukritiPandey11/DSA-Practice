#include <iostream>
using namespace std;
int main()
{
    int n,cnt=0;
    cout<<"enter an integer"<<endl;
    cin>>n;
    if(n==0){cout<<"1(num is zero)"<<endl;}
    while(n!=0)
    {
        n=n/10;
        cnt++;
    }
    cout<<"Output:"<<cnt<<endl;
}