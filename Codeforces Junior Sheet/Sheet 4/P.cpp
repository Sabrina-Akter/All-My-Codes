#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

int main()
{
    fastt;
    ll sum=0, flag=0;
    vector <string> v;
    string s;
    getline(cin, s);
    s = s  + '.';
    for(ll i=0;i<s.size();i++)
    {
        if(((s[i]>=65 && s[i]<=90) || (s[i]>=97 && s[i]<=122)) && (flag==0))
        {
            flag=1;
        }
        else if((s[i]=='!' || s[i]=='.' || s[i]=='?' || s[i]==',' || s[i]==' ') && (flag==1))
        {
            sum++;
            flag=0;
        }
    }
    cout << sum << endl;
    return 0;
}
