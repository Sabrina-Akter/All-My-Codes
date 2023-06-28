#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    long long int n, x, i;
    cin >> n >> x;
    long long ar[n];
    for(i=0;i<n;i++)
    {
        cin >> ar[i];
    }
    for(i=0;i<n;i++)
    {
        if(ar[i]!=x)
        {
            cout << ar[i] << " ";
        }
    }
    return 0;
}
