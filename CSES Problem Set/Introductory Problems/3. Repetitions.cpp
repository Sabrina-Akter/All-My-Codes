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
    ll i, sum=1, MAX=1;
    string s;
    cin >> s;
    for(i=1;i<s.size();i++)
    {
        if(s[i]==s[i-1])
        {
            sum++;
        }
        else
        {
            sum = 1;
        }
        if(sum>MAX)
        {
            MAX = sum;
        }
    }
    cout << MAX << endl;
    return 0;
}
