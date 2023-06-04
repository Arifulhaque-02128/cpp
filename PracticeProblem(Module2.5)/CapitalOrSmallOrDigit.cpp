#include<bits/stdc++.h>
using namespace std;

int main()
{
    char x; cin >> x;
    if (x>=48 && x<=57)
    {
        cout<<"IS DIGIT"<<endl;
    }
    else if (x>='A' && x<='Z')
    {
        cout<<"ALPHA"<<endl;
        cout<<"IS CAPITAL"<<endl;
    }
    else if (x>='a' && x<='z')
    {
        cout<<"ALPHA"<<endl;
        cout<<"IS SMALL"<<endl;
    }
    
    return 0;
}

// input ----> A, 6, z
