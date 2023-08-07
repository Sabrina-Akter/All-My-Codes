#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

int main()
{
    fastt;
    long long n, i, sum=0;
    cin >> n;
    string s;
    cin >> s;
    for(i=0;i<s.size();i++)
    {
        sum=sum+(s[i]-48);
    }
    cout << sum << endl;
    return 0;
}
