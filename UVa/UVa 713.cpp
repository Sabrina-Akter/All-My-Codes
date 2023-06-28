#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define FOR(i,x,y) for(ll i=x;i<=y;i++)
#define vll vector <ll>
#define pb push_back

string sum(string a, string b, ll x, ll y)
{
    ll i, N, M, SUM, rem, car=0;
    string s="";
    char r, c;
    while(1)
    {
        N = a[x-1]-48;
        M = b[y-1]-48;
        if(x<=0)
        {
            N = 0;
        }
        if(y<=0)
        {
            M = 0;
        }
        if(x<=0 && y<=0)
        {
            return s+c;
            break;
        }
        SUM = N+M+car;
        //cout << "SUM = " << SUM << endl;
        rem = SUM%10;
        //cout << "rem = " << rem << endl;
        car = (SUM - rem)/10;
        c = car+48;
        //cout << "car = " << car << endl;
        r = rem+48;
        //cout << "r = " << r << endl;
        s = s + r;
        //cout << "s = " << s << endl;
        x--;
        //cout << "x = " << x << endl;
        y--;
        //cout << "y = " << y << endl;
        //cout << endl;
    }
}

string rev(string x, ll N)
{
    ll i, z=0;
    string s = "";
    for(i=N-1;i>=0;i--)
    {
        if((x[i]!='0') || ((x[i]=='0') && (z==1)))
        {
            s = s+x[i];
            z = 1;
        }
        else if(x[i]=='0' && z==0)
        {
            continue;
        }
    }
    return s;
}

int main()
{
    fastt;
    ll n;
    cin >> n;
    while(n--)
    {
        string a, b, S;
        cin >> a >> b;
        a = rev(a, a.size());
        b = rev(b, b.size());
        //cout << "a = " << a << ", b = " << b << endl;
        S = sum(a, b, a.size(), b.size());
        //cout << "S = " << S << endl;
        S = rev(S, S.size());
        //cout << "S = " << S << endl;
        S = rev(S, S.size());
        //cout << "S = " << S << endl;
        cout << S << endl;
    }
    return 0;
}
