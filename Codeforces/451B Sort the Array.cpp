#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n, i, first=-1, last=-1, f=0;
    cin >> n;
    ll ar[n], b[n];
    for(i=0;i<n;i++)
    {
        cin >> ar[i];
        b[i] = ar[i];
    }
    sort(b, b+n);
    for(i=0;i<n;i++)
    {
        if((ar[i]!=b[i]) && (first==-1))
        {
            first = i;
        }
        else if((ar[i]!=b[i]) && (first!=-1))
        {
            last = i;
        }
    }
    if(first==last)
    {
        cout << "yes" << endl;
        cout << 1 << " " << 1 << endl;
    }
    else
    {
        reverse(ar+first, ar+last+1);
        for(i=first;i<=last;i++)
        {
            if(ar[i]!=b[i])
            {
                f=1;
                break;
            }
        }
        if(f==1)
        {
            cout << "no" << endl;
        }
        else
        {
            cout << "yes" << endl;
            cout << first+1 << " " << last+1 << endl;
        }
    }
    return 0;
}
