#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int

int main()
{
    fastt;
    string s;
    ll t;
    cin >> t;
    while(t--)
    {
        cin >> s;
        size_t f1 = s.find("010");
        size_t f2 = s.find("101");
        if((f1!=string::npos) || (f2!=string::npos))
        {
            cout << "Good" << endl;
        }
        else
        {
            cout << "Bad" << endl;
        }
    }
    return 0;
}
