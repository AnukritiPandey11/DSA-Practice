#include <bits/stdc++.h>
using namespace std;
int pivotFinder(int arr[],int low,int high)
{
    int piv=low;
    int i=low;
    int j=high;
    while(i<j) //till the pointers dont cross themself
    {
        while(i<=high-1 && arr[i]>=arr[piv])//boundary cond first
        {
            i++;//till  we dont find greater than pivot
        }
        while(j>=low&&arr[j]<arr[piv])//why not>= because if same we want it to be on the smaller side 
        {
            j--;
        }
        if(i<j)//to check if crossed 
        {
            //swapping
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }

    }
    //final swap to put pivot in right place
    int temp=arr[low];
    arr[low]=arr[j];
    arr[j]=temp;
    return j; //returning the pos
}
void QuickSort(int arr[], int low, int high)
{
    if(low<high)//to check if there is more than one element in the array
    {
        int pivIndx=pivotFinder(arr,low,high);//fun will return the pivot pos after putting it in  the correct place
        QuickSort(arr,low,pivIndx-1); //for sorting array on the left side
        QuickSort(arr,pivIndx+1,high);//for right side array
    }
    return;
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
    QuickSort(arr,0,n-1);
    cout<<"sorted array"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
}