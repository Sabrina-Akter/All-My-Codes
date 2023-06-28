#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> N;
    int n, i, a, b, sum = 0;
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> a >> b;
        sum = sum + b - a;
        N.push_back(sum);
    }
    sort(N.begin(), N.end());
    cout << N[n-1];
    return 0;
}
