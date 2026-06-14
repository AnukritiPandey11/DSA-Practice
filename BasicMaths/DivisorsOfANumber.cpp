#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter the num"<<endl;
    cin>>n;
    int org=n;
    vector<int> vec;
    int i=0;
    for(i=1;i<sqrt(n);i++)
    {
        if(n%i==0)
        {
            vec.push_back(i);
            vec.push_back(n/i);
        }
    }
    cout<<"Output=[";
    for(auto it: vec)
    {
        cout<<it<<"  ";
    }
    cout<<"]";
}
