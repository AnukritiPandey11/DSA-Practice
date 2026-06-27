#include <bits/stdc++.h>
using namespace std;
int LinearSearch(int arr[],int n,int x)
{
    
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int x;
    cin>>x;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    LinearSearch(arr,n,x);
    int index=LinearSearch(arr,n,x);

    cout<<"on pos="<<index+1<<endl;

}