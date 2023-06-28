#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    long long v, t, s, d;
    cin >> v >> t >> s >> d;
    t = v*t;
    s = v*s;
    if(d>=t && t<=s)
    {
        cout << "No\n";
    }
    else
    {
        cout << "Yes\n";
    }
    return 0;
}
