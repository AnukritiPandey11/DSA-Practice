#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int i,j,temp,minIndex;
    int min=arr[0];
    for(i=0;i<n-2;i++)
    {
        min=arr[i];
        for(j=i;j<n-1;j++)
        {
            if(min>arr[j])
            {
                min=arr[j];
                minIndex=j;
            }
        }
        temp=arr[i];
        arr[i]=min;
        arr[minIndex]=temp;
    }
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }

}
