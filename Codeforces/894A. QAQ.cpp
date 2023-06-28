#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back
#define INF 99999999
#define N 100000

int main()
{
    fastt;
    string s;
    cin >> s;
    ll i, j, k, sum=0;
    for(i=0;i<s.size();i++)
    {
        if(s[i]=='Q')
        {
            for(j=i+1;j<s.size();j++)
            {
                if(s[j]=='A')
                {
                    for(k=j+1;k<s.size();k++)
                    {
                        if(s[k]=='Q')
                        {
                            sum++;
                        }
                    }
                }
            }
        }
    }
    cout << sum << endl;
    return 0;
}
