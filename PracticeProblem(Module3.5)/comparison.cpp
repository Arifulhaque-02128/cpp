#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b; char ch; cin>>a>>ch>>b;
    if (ch == '=')
    {
        if (a == b)
        {
            cout<<"Right"<<endl;
        }
        else
        {
            cout<<"Wrong"<<endl;
        }
    }
    else if (ch == '>')
    {
        if (a>b)
        {
            cout<<"Right"<<endl;
        }
        else
        {
            cout<<"Wrong"<<endl;
        }
    }
    else if (ch == '<')
    {
        if (a<b)
        {
            cout<<"Right"<<endl;
        }
        else
        {
            cout<<"Wrong"<<endl;
        }
        
    }
    
    return 0;
}

// input ----> 5 > 4 or 9 < 1 or 4 = 4


