#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, i, x=0;
    cin >> t;
    while(t--)
    {
        x++;
        vector <int> v;
        int n;
        for(i=0;i<3;i++)
        {
            cin >> n;
            v.push_back(n);
        }
        int l = sizeof(v);
        sort(v.begin(), v.end());
        cout << "Case " << x << ":";
        for(i=0;i<3;i++)
        {
            cout << " " << v[i];
        }
        cout << endl;
    }
    return 0;
}

