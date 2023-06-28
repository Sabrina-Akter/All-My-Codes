#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n, x, i;
    cin >> n;
    long long ar[n];
    for(i=0;i<n;i++)
    {
        cin >> ar[i];
    }
    sort(ar, ar+n);
    cout << ar[n-1] << endl;
    return 0;
}
