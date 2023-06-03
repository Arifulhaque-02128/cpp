#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;
    for (int i = 0; i < t; i++)
    {
        int n; cin>>n;
        char ch; cin>>ch;

        for (int j = 0; j < n; j++)
        {
            if (j==(n-1))
            {
                cout<<ch<<endl;
            } else {
                cout<<ch<<" ";
            }
            
        }
        
    }
    
    return 0;
}


// input ---> 2
// 1 n
// 5 O
