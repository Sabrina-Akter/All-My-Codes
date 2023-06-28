#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1 = "ROYGBIV", s2 = "GBIV";
    int n, i, f=-1;
    cin >> n;
    for(i=0;i<n;i++)
    {
        if(i<7)
        {
            cout << s1[i];
        }
        else
        {
            f++;
            if(f==4)
            {
                f = 0;
            }
            cout << s2[f];
        }
    }
    return 0;
}
