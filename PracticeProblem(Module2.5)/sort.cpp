#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    for (int i = 0; i < (n-1); i++)
    {
        for (int j = (i+1); j < n; j++)
        {
            if (arr[i]>arr[j])
            {
                swap(arr[i], arr[j]);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (i==(n-1))
        {
            cout<<arr[i]<<endl;
        } else {
            cout<<arr[i]<<" ";

        }
    }
    
    
    
    return 0;
}


// input ----> 4
// 5 2 7 3
