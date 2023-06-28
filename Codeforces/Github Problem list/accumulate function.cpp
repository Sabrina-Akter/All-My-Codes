#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> N;
    int x, i;
    for(i=1;i<=5;i++)
    {
        N.push_back(i);
    }
    for(i=4;i>=0;i--)
    {
        cout << accumulate(N.begin(), N.end()-i, 0) << endl;
    }
    return 0;
}
