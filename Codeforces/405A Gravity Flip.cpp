#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,x,i;
    cin >> n;
    vector <int> N;
    for(i=0;i<n;i++)
    {
        cin >> x;
        N.push_back(x);
    }
    sort(N.begin(), N.end());
    for(i=0;i<n;i++)
    {
        cout << N[i] << " ";
    }
    cout << endl;
    return 0;
}
