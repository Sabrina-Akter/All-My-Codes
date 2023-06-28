#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t, n, i, x, max, min, N;
    cin >> t;
    while(t--)
    {
        N = -1;
        cin >> n;
        vector <long long> v(n);
        for(i=0; i<n; i++)
        {
            cin >> x;
            v.push_back(x);
        }
        while(1)
        {
            N++;
            max = *max_element(v.begin(), v.end());
            min = *min_element(v.begin(), v.end());
        }
    }
    return 0;
}
