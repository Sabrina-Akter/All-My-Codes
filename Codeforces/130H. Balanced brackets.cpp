#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

int main()
{
    fastt;
    stack <char> q;
    string s;
    ll i;
    cin >> s;
    for(i=0;i<s.size();i++)
    {
        if(s[i]=='(')
        {
            q.push(s[i]);
        }
        else if(s[i]==')')
        {
            if(q.empty()==0 && q.top()=='(')
            {
                q.pop();
            }
            else
            {
                q.push(s[i]);
            }
        }
    }
    if(q.empty()==1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
