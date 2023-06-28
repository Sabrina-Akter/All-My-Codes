#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    long long int n, q, l, r, i;
    cin >> n >> q;
    long long int ar[n]={0};
    while(q--)
    {
        cin >> l >> r;
        l--;
        r--;
        for(i=l;i<=r;i++)
        {
            ar[i]++;
        }
    }
    for(i=0;i<n;i++)
    {
        cout << ar[i] << " ";
    }
    return 0;
}
