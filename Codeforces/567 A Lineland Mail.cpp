#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    long long n, i, mini, maxi;
    cin >> n;
    long long ar[n];
    for(i=0;i<n;i++)
    {
        cin >> ar[i];
    }
    for(i=0;i<n;i++)
    {
        if(i==0)
        {
            cout << abs(ar[i]-ar[i+1]) << " " << abs(ar[i]-ar[n-1]) << endl;
        }
        else if(i==n-1)
        {
            cout << abs(ar[i-1]-ar[i]) << " " << abs(ar[0]-ar[i]) << endl;
        }
        else
        {
            mini = min(abs(ar[i-1]-ar[i]), abs(ar[i]-ar[i+1]));
            maxi = max(abs(ar[0]-ar[i]), abs(ar[i]-ar[n-1]));
            cout << mini << " " << maxi << endl;
        }
    }
    return 0;
}
