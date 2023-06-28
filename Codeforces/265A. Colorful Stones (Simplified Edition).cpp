#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

int main()
{
    fastt;
    ll i=0, j=0, sum=0;
    string a, b;
    cin >> a >> b;
    while(1)
    {
        if(i==a.size() || j==b.size())
        {
            break;
        }
        else if(a[i]==b[j])
        {
            i++;
            sum++;
            j++;
        }
        else
        {
            j++;
        }
    }
    cout << sum+1 << endl;
    return 0;
}
