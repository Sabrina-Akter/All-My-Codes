#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, x, ans;
    cin >> s;
    sort(s.begin(), s.end());
    int n, i, f=0;
    cin >> n;
    vector <string> v(n);
    for(i=0;i<n;i++)
    {
        cin >> v[i];
        x = v[i];
        sort(x.begin(), x.end());
        if(s==x && f==0)
        {
            ans = v[i];
            f=1;
        }
    }
    cout << ans << endl;
    return 0;
}