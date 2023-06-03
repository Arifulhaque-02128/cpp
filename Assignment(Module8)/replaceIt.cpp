#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t; cin>>t;

    for (int i = 0; i < t; i++)
    {
        string s, x; 
        cin>>s>>x;

        int sizeX = x.size();
        int pos = s.find(x);
        
        while (pos != -1 )
        {
            s.replace(pos, sizeX, "$");
            pos = s.find(x);
        }

        cout<<s<<endl;
        

    }

    return 0;
}


// input ----> 2
// thatsagoodmomentforgoodrelations good
// canyoutellmewhereicanfindheriwillbegreatefultoyouifyoutellmetheanswer you