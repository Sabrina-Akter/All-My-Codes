#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n, i;
    cin >> n;
    long long ar[n], b[n];
    for(i=0;i<n;i++)
    {
        cin >> ar[i];
        b[i] = ar[i];
    }
    sort(ar,ar+n);
    if((n==1) || (n==2 && ar[0]==ar[1]))
    {
        cout << "-1\n";
    }
    else
    {
        cout << 1 << endl;
        for(i=0;i<n;i++)
        {
            if(ar[0]==b[i])
            {
                cout << i+1 << endl;
                break;
            }
        }
    }
    return 0;
}
