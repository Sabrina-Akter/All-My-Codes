#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x, i, a, s;
    vector <int> N;
    cin >> n;
    N.push_back(0);
    for(i=1;i<n;i++)
    {
        cin >> x;
        N.push_back(x);
    }
    s = N.size();
    for(i=0;i<s;i++)
    {
        a = N[i] + 1;
        N[i] = -1;
        cout << count(N.begin(), N.end(), a) << endl;
    }
    return 0;
}

