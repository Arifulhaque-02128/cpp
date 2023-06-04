#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c; char ch1, ch2; cin>>a>>ch1>>b>>ch2>>c;
    int result;
    if (ch1 == '+')
    {
        result = a+b;
    }
    else if (ch1 == '-')
    {
        result = a-b;
    }
    else if (ch1 == '*')
    {
        result = a*b;
    }

    if (result == c)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<result<<endl;
    }
    
    
    return 0;
}


// input ----:> 5 + 10 = 15

// input ----> 3 - 1 = 2

// input -----> 2 * 10 = 19

