#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n, k, i;
    cin >> n >> k;
    vector <long long> ar(n);
    for(i=0;i<n;i++)
    {
        cin >> ar[i];
    }
    rotate(ar.begin(), ar.begin()+k, ar.end());
    for(i=0;i<n;i++)
    {
        cout << ar[i] << " ";
    }
    return 0;
}
