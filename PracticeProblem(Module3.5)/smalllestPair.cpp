#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    for (int i = 0; i < t; i++)
    {
        int n; cin>>n;
        int arr[n];
        for (int j = 0; j < n; j++)
        {
            cin>>arr[j];
        }

        int result=INT_MAX;

        for (int x = 0; x < (n-1); x++)
        {
            for (int y = (x+1); y < n; y++)
            {
                int s = arr[x] + arr[y] + y - x;
                if (s<result){
                    result = s;
                }
            }
        }

        cout<<result<<endl;
        
    }
    
    return 0;
}


// input -----> 1
// 4
// 20 1 9 4
