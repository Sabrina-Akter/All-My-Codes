#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define vll vector <long, long>
#define pb push_back
#define nl endl

int main()
{
    unordered_map <char, ll> m;
    while(1)
    {
        string s;
        char c, d;
        ll n;
        cin >> s;
        if(s=="HLT")
        {
            break;
        }
        else
        {
            if(s=="LOD")
            {
                cin >> c >> n;
                m[c] = n;
            }
            else if(s=="INC")
            {
                cin >> c;
                m[c]++;
            }
            else if(s=="ADD")
            {
                cin >> c >> d;
                m[c] = m[c]+m[d];
            }
            else if(s=="MUL")
            {
                cin >> c >> d;
                m[c] = m[c]*m[d];
            }
            else if(s=="JMP")
            {
                
            }
        }
    }
}