#include <bits/stdc++.h>
using namespace std;
int Sum(int n, int sum)
{
    if(n==0)
    {
        return sum;
    }
    sum=sum+n;
    n--;
    Sum(n,sum);
    
}
int main()
{
    int n=5;
    int sum=0;
    int a=Sum(n,sum);
    cout<<"the sum is "<<a<<endl;
}