#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

int main()
{
    fastt;
    ll n, i, sum=0, flag=0;
    cin >> n;
    vector <char> v;
    char c;
    for(i=0;i<n;i++)
    {
        cin >> c;
        if(c=='X')
        {
            flag=1;
        }
        else if(flag==1)
        {
            flag=0;
        }
        else
        {
            v.pb(c);
        }
    }
    v.pb('A');
    for(i=0;i<v.size();i++)
    {
        if((v[i]=='X' || v[i]=='Y' || v[i]=='Z') && (i==v.size()-1))
        {
            continue;
        }
        else if(v[i]=='V')
        {
            sum = sum + 5;
        }
        else if(v[i]=='W')
        {
            sum = sum + 2;
        }
        else if(v[i]=='Y')
        {
            c = v[i+1];
            v.erase(v.begin()+(i+1));
            v.pb(c);
        }
        else if(v[i]=='Z')
        {
            if(v[i+1]=='V')
            {
                sum/=5;
            }
            else if(v[i+1]=='W')
            {
                sum/=2;
            }
            if(v[i+1]=='V' || v[i+1]=='W')
            {
                v.erase(v.begin()+(i+1));
            }
        }
    }
    cout << sum << endl;
    return 0;
}
