#include <bits/stdc++.h>
using namespace std;
int Fact(int n)
{
    if(n==1)
    {
        return 1;
    }
    int fac=n*Fact(n-1);  
    return fac;  
}
int main()
{
    int n=5;
    int fac=Fact(n);
    cout<<"Factorial is "<<fac<<endl;
}