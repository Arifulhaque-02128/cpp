#include<bits/stdc++.h>
using namespace std;


class Student {
    public : 
        string name;
        int cls;
        char sec;
        int id;
};

int main()
{
    int n; cin>>n;

    Student arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i].name>>arr[i].cls>>arr[i].sec>>arr[i].id;

    }

    int start = 0, end = n-1;

    while (start < end)
    {
        swap(arr[start].id, arr[end].id);

        start++;
        end--;
    }

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i].name<<" "<<arr[i].cls<<" "<<arr[i].sec<< " " <<arr[i].id<<endl;

    }
    
    
    
    return 0;
}

// input ----> 3
// Rakib 7 B 90 
// Sakib 10 A 85
// Ahsan 9 C 36