#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int

int main()
{
    fastt;
    ll t, Case=0, ans, i, j, x, sum;
    cin >> t;
    while(t--)
    {
        ans = 0, Case++;
        string s1, s2;
        cin >> s1 >> s2;
        for(i=0;i<s1.size();i++)
        {
            if(s1.compare(i, s2.size(), s2)==0)
            {
                ans++;
            }
        }
        cout << "Case " << Case << ": " << ans << endl;
    }
    return 0;
}
