#include <bits/stdc++.h>
using namespace std;

int main()
{
    double t, n, i, x, sum;
    vector <double> N;
    cin >> t;
    for(i=0;i<t;i++)
    {
        cin >> n;
        N.push_back(n);
    }
    sort(N.begin(), N.end());
    sum = N[0];
    for(i=0;i<t-1;i++)
    {
        {
            x = (N[i] + N[i+1])/2;
            N[i+1] = x;
        }
    }
    cout << x << endl;
    return 0;
}
