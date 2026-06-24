#include <bits/stdc++.h>
using namespace std;
void Merge(int arr[],int low,int mid,int high)
{
    int temp[low+high+1];
    int i=0;
    int left=low;//pointer for the first array
    int right=mid+1;//pointer for the second array
    while(left<=mid&&right<=high)
    {
        if(arr[left]<arr[right])
        {
            temp[i]=arr[left];
            left++;
            i++;
        }
        else
        {
            temp[i]=arr[right];
            right++;
            i++;
        }
    }
    while(left<=mid)
    {
        temp[i]=arr[left];
        i++;
        left++;
    }
    while(right<=high)
    {
        temp[i]=arr[right];
        i++;
        right++;
    }
    for(int j=low;j<=high;j++)
    {
        arr[j]=temp[j-low];
    }

}
void MergeSort(int arr[],int low,int high)
{
    //base condition
    if(low>=high)
    return;
    int mid=(low+high)/2;
    MergeSort(arr,low,mid);//first part of array
    MergeSort(arr,mid+1,high);//second part of the array 
    Merge(arr,low,mid,high);

}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    MergeSort(arr,0,n-1);
    cout<<"new arr"<<endl;
    for(int i=0;i<n;i++)
    {
        
        cout<<arr[i]<<endl;
    }
}