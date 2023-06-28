#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while(t--)
    {
        long long n, d, i, sum=0;
        cin >> n >> d;
        long long ar[n];
        for(i=0;i<n;i++)
        {
            cin >> ar[i];
            if(ar[i]>d)
            {
                sum++;
            }
        }
        sort(ar,ar+n);
        if(sum==0)
        {
            cout << "YES\n";
        }
        else
        {
            if(ar[0]+ar[1]<=d)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
    }
    return 0;
}
