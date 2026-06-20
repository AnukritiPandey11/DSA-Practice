#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    //precompute
    int hash[1000]={0};
    for(int i=0;i<n;i++)
    {
        hash[arr[i]]+=1;
    }
    int x;
    cin>>x;
    while(x--){
        int number;
        cin>>number;
        //fetching number
        cout<<hash[number]<<endl;
    }
    return 0;

}