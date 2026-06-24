#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    map<int,int> mpp;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
          //pre-compute
         mpp[arr[i]]++;
    }
    int q;
    cin>>q;
    while(q--)
    {
        int number;
        cin>>number;
        //fetch
        cout<<mpp[number];
    }
}