#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n;
    int arr[26] = {0};
    for (int i = 0; i < n; i++)
    {
        char ch; cin>>ch;
        arr[ch-'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (arr[i] != 0)
        {
            for (int j = 0; j < arr[i]; j++)
            {
                char result = i+'a';
                cout<<result;
            }
        }
    }
    
    
    return 0;
}



// input =====> 4
// deab

// input ----:> 5
// egypt

