#include<bits/stdc++.h>
using namespace std;


double sum(int x, int n){
    double s = 0;
    for (int i = 2; i <= n; i=i+2)
    {
        s = s + pow(x*1.0, i*1.0);
    }

    return s;
}
int main()
{
    int x, n; cin>>x>>n;
    
    double result = sum(x, n);
    cout<<result<<endl;
    
    return 0;
}

// input ----> 5 5
