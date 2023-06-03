#include<bits/stdc++.h>
using namespace std;


class Student {
    public : 
        string name;
        int cls;
        char sec;
        int math_marks;
        int eng_marks;
};

int main()
{
    int n; cin>>n;

    Student arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i].name>>arr[i].cls>>arr[i].sec>>arr[i].math_marks>>arr[i].eng_marks;

    }

    for (int i = n-1; i >= 0; i--)
    {
        cout<<arr[i].name<<" "<<arr[i].cls<<" "<<arr[i].sec<< " " <<arr[i].math_marks<<" "<<arr[i].eng_marks<<endl;
    }
    
    
    return 0;
}

// input ----> 3
// Rakib 7 B 90 85
// Sakib 10 A 85 61
// Ahsan 9 C 36 58