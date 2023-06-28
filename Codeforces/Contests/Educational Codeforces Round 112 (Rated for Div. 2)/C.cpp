#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define lll long long int
#define vlll vector <lll>
#define pb push_back

int main()
{
    fastt;
    lll t;
    cin >> t;
    while(t--)
    {
        lll n, s, S;
        cin >> n;
        s = n/6;
        S = n%6;
        if(n<=6)
        {
            cout << 15 << endl;
        }
        else if(S==0)
        {
            cout << s*15 << endl;
        }
        else if(6+S>10)
        {
            cout << ((n/6)+1)*15 << endl;
        }
        else if(6+S>8)
        {
            cout << (((n/6)-1)*15)+(25) << endl;
        }
        else if(6+S<=8)
        {
            cout << (((n/6)-1)*15)+(20) << endl;
        }
    }
    return 0;
}
