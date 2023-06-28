#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    long long n, t, i, x, last;
    cin >> n >> t;

    for(i=1;i<n;i++)
    {
        cin >> x;
        if(i==1)
        {
            last = x+i;
        }
        if(last==i)
        {
            last = x+i;
        }
        if(last==t)
        {
            cout << "YES" << endl;
            break;
        }
        if(last>t)
        {
            cout << "NO" << endl;
            break;
        }
    }
    return 0;
}
