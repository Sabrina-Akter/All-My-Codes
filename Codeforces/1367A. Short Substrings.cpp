#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int

int main()
{
    fastt;
    ll t, i;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        for(i=0;i<s.size();i++)
        {
            if(i==0 || i==1 || i%2!=0)
            {
                cout << s[i];
            }
        }
        cout << endl;
    }
    return 0;
}
