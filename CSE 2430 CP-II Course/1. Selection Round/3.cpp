#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    long long int n, i;
    cin >> n;
    vector <long long int> ar(n);
    for(i=0;i<n;i++)
    {
        cin >> ar[i];
    }
    sort(ar.begin(),ar.end());
    cout << ar[n-1] << endl;
    return 0;
}
