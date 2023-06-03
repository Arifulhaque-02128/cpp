#include<bits/stdc++.h>
using namespace std;


class Student {
    public : 
        string name;
        int cls;
        char sec;
        int id;
        int math_marks;
        int eng_marks;
};

bool cmp(Student a, Student b){
    if ((a.math_marks + a.eng_marks) > (b.math_marks + b.eng_marks))
    {
        return true;
    } 
    else if ((a.math_marks + a.eng_marks) == (b.math_marks + b.eng_marks))
    {
        if (a.id < b.id)
        {
            return true;
        }
        else
        {
            return false;
        } 
    }
    
    else {
        return false;
    }
    
}

int main()
{
    int n; cin>>n;

    Student arr[n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i].name>>arr[i].cls>>arr[i].sec>>arr[i].id>>arr[i].math_marks>>arr[i].eng_marks;

    }

    sort(arr, arr+n, cmp);

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i].name<<" "<<arr[i].cls<<" "<<arr[i].sec<< " " <<arr[i].id<<" "<<arr[i].math_marks<< " "<< arr[i].eng_marks <<endl;

    }
    
    
    
    return 0;
}