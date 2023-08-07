#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t, n, i, j, k, v;
    cin >> t;
    while(t--)
    {
        cin >> n;
        long long A[n];
        for(i=0;i<n;i++)
        {
            cin >> A[i];
        }
        for(k=0;k<n;k++)
        {
            for(i=k;i<n;i++)
            {
                vector <int> v;
                for(j=k;j<=i;j++)
                {
                    v.push_back(A[j]);
                }
                cout << *max_element(v.begin(),v.end()) << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}

