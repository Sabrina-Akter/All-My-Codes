#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

int main()
{
    fastt;
    string s, s1="", s2="";
    cin >> s;
    ll n, i, l = s.size(), c=0;

    if(l%2!=0)
    {
        if(l==1)
        {
            cout << "0" << endl;
        }
        else
        {
            for(i=1;i<=l-2;i++)
            {
                cout << "9";
            }
            cout << endl;
        }
    }
    else if(l%2==0)
    {
        if(s=="10")
        {
            cout << "0" << endl;
        }
        else
        {
            n = l/2;
            for(i=0;i<l;i++)
            {
                c++;
                if(c<=n)
                {
                    s1 = s1 + s[i];
                }
                else
                {
                    s2 = s2 + s[i];
                }
            }
            stringstream NN1(s1);
            ll n1=0;
            NN1 >> n1;
            stringstream NN2(s2);
            ll n2=0;
            NN2 >> n2;
            if(n2>=n1)
            {
                cout << n1 << endl;
            }
            else
            {
                cout << n1-1 << endl;
            }
        }
    }
    return 0;
}
