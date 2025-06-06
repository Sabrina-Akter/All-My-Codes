#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int x = 3;
        vector <int> v(3);
        while(x--) cin >> v[x];
        sort(v.begin(), v.end());
        if(v[2] == v[0] + v[1]) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}