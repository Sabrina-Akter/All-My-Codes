#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,t,x=0;
    string s;
    cin >> n >> s;

    t = s.size();

    for(i=0;i<=t;i++)
    {
        if(s[i]==s[i-1])
        {
            x++;
        }
    }
    cout << x << endl;
    return 0;
}
