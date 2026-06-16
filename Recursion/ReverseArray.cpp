#include <bits/stdc++.h>
using namespace std;

void RevArray(int arr[], int n, int rev[], int idx)
{
    if (n < 0)
        return;

    rev[idx] = arr[n];

    RevArray(arr, n - 1, rev, idx + 1);
}

int main()
{
    int array[4] = {1,2,3,4};

    int n = sizeof(array)/sizeof(array[0]);

    int rev[4];

    RevArray(array, n - 1, rev, 0);

    for(int i = 0; i < n; i++)
        cout << rev[i] << " ";
}