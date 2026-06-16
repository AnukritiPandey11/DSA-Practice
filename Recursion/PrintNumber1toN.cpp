#include <iostream>
using namespace std;
//printing 1 to n
void PrintNum(int n,int x)
{
    if(x==n)
    {
        return ;
    }
    cout<<x<<endl;
    x++;
    PrintNum(n,x);
}
//printing n to 1
void Printnum(int n)
{
    if(n==0)
    {
        return ;
    }
    cout<<n<<endl;
    n--;
    Printnum(n);
}
int main()
{
    int n=5;
    int x=1;
    cout<<"Number 1 to N"<<endl;
    PrintNum(n,x);
    cout<<"Number N to 1"<<endl;
    Printnum(n);
}

