#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t, a, b, i, sum=0;
    cin >> t;
    vector <long long> v1, v2;
    for(i=0;i<t;i++)
    {
        cin >> a >> b;
        v1.push_back(a);
        v2.push_back(b);
    }
    for(i=0;i<t;i++)
    {
        sum = sum + count(v2.begin(), v2.end(), v1[i]);
    }
    cout << sum << endl;
    return 0;
}
