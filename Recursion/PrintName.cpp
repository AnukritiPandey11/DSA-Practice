#include <iostream>
using namespace std;
void PrintName(int n)
{
    if(n==0)
    {
        return ;
    }
    string name="Anukriti";
    cout<<name<<endl;
    n--;
    PrintName(n);
}
int main()
{
    int n=5;
    PrintName(n);
}