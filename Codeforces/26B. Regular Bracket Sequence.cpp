#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

int main()
{
    fastt;
    queue <char> q;
    string s;
    ll i,sum=0;
    cin >> s;
    for(i=0;i<s.size();i++)
    {
        if(s[i]=='(')
        {
            q.push('(');
        }
        else if(s[i]==')')
        {
            if(q.size()>0)
            {
                q.pop();
                sum+=2;
            }
        }
    }
    cout << sum << endl;
    return 0;
}
