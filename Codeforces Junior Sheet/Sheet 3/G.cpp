#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

int main()
{
    fastt;
    long long n, i, x, flag=0;
    cin >> n;
    vector <long long> a, b;
    for(i=0;i<n;i++)
    {
        cin >> x;
        a.push_back(x);
        b.push_back(x);
    }
    reverse(b.begin(), b.end());
    for(i=0;i<n;i++)
    {
        if(a[i]!=b[i])
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
    return 0;
}
