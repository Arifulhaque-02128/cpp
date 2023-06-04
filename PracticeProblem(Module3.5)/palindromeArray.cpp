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

    int flag = 0;

    int start = 0; int end = n-1;
    while (start<end)
    {
        if (arr[start] != arr[end])
        {
            flag = 1;
            break;
        }

        start++;
        end--;
        
    }

    if (flag == 0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    
    
    return 0;
}

// input ----> 5
// 1 3 2 3 1

// input ----> 4
// 1 2 3 4

