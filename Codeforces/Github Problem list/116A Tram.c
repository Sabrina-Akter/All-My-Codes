#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, a, b, sum = 0;
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> a >> b;
        sum = sum + b - a;
        vector <int> N;
        N.push_back(sum);
    }
    int l = sizeof(N);
    sort(N.begin(), N.end());
    for(i=0;i<l;i++)
    {
        cout << N[i] << endl;
    }
    return 0;
}
