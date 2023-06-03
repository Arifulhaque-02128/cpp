#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
        string name;
        int roll;
        int marks;
};


bool cmp(Student a, Student b){
    if (a.marks>b.marks)
    {
        return true;
    }
    else if (a.marks == b.marks){
        if(a.roll<b.roll){
            return true;
        } else {
            return false;
        }
    }
    else
    {
        return false;
    }
    
}

int main()
{
    int n; cin>>n;

    Student arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i].name>>arr[i].roll>>arr[i].marks;
    }

    sort(arr, arr+n, cmp);

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i].name<<" "<<arr[i].roll<<" "<<arr[i].marks<<endl;
    }
    
    
    return 0;
}



// input ----> 5
// Asif 29 95
// Sakib 55 89
// Zubair 57 93
// Ahsan 39 86
// Joy 12 99



// input -----> 5
// Asif 29 95
// Sakib 55 86
// Zubair 57 86
// Ahsan 39 86
// Joy 12 99
