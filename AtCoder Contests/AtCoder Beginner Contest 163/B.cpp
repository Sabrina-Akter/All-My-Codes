#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long sum = 0;
    int n, t, i, x;
    cin >> n >> t;
    for(i=0;i<t;i++)
    {
        cin >> x;
        sum = sum + x;
    }
    if(sum>n)
    {
        cout << "-1" << endl;
    }
    else
    {
        cout << n-sum << endl;
    }
    return 0;
}
