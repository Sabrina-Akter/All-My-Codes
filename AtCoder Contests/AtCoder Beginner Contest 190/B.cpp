#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    long long int n, s, d, x, y, f=0;
    cin >> n >> s >> d;
    while(n--)
    {
        cin >> x >> y;
        if(x<s && y>d)
        {
            f = 1;
            cout << "Yes\n";
            break;
        }
    }
    if(f==0)
    {
        cout << "No\n";
    }
    return 0;
}
