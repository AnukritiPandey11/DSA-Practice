#include<bits/stdc++.h>
using namespace std;
int main()
{
    //optimal||TC=O(N)
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int large=arr[0];
    int secLarge=INT_MIN;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>large)
        {
            secLarge=large;
            large=arr[i];
            
        }
        else if(arr[i]<large&&arr[i]>secLarge)
        {
            secLarge=arr[i];
        }
        
    }
    if(secLarge!=INT_MIN)
    {
        cout<<"sec large  "<<secLarge<<endl;
    }
    else{
       cout << "No second largest";
    }



}
//brute force -sort and then print the last second elemet if its not equal to large || TC-O(NlogN)
//better- loop 1->find largest loop-2-> find sec largest & not equal to zero||TC- O(2N)