#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n;
    for (int i = 0; i < n; i++)
    {
        int size; cin>>size;
        int arr[size];
        for (int j = 0; j < size; j++)
        {
            cin>>arr[j];
        }

        int evenCnt = 0;
        int oddCnt = 0;
        for (int j = 0; j < size; j++)
        {
            if (arr[j]%2 == 0)
            {
                evenCnt++;
            } else {
                oddCnt++;
            }
            
        }

        int cnt = 0;
        
        if ((size%2) != 0)
        {
            int cnt = -1;
            cout<<cnt<<endl;
        }
        
        else
        {
            while (evenCnt != oddCnt)
            {
                if (evenCnt < oddCnt)
                {
                    evenCnt++;
                    oddCnt--;
                    cnt++;
                }
                else if (oddCnt < evenCnt)
                {
                    oddCnt++;
                    evenCnt--;
                    cnt++;
                }
                
            }
            
            cout<<cnt<<endl;
        }
                
    }
    
    return 0;
}


// input ----> 3
// 4
// 1 2 3 4
// 4
// 1 1 1 1
// 3
// 1 2 3
