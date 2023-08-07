#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, x, i, sum=0;
    cin >> n;
    vector <long long> v1, v2;
    for(i=0;i<n;i++)
    {
        cin >> x;
        v1.push_back(x);
        v2.push_back(x);
    }
    reverse(v2.begin(), v2.end());

    for(i=0;i<n;i++)
    {
        if(v1[i]==v2[i])
        {
            sum++;
        }
    }
    if(sum==n)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
    return 0;
}
