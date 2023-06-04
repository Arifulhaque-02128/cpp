#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c; cin>>a>>b>>c;
    

    int max;
    int min;


    if(a>=b && a>=c){
        max = a;
        if (b<c)
        {
            min = b;
        } else {
            min = c;
        }
    } else if (b>=a && b>=c) {
        max = b;
        if (a<c)
        {
            min = a;
        }
        else
        {
            min = c;
        }
    } else if (c>=a && c>=b){
        max = c;
        if (a<b)
        {
            min = a;
        }
        else
        {
            min = b;
        }
    } 
    

    cout<<min<<" "<<max<<endl;
    
    
    return 0;
}


// input -----> 10 20 -5
