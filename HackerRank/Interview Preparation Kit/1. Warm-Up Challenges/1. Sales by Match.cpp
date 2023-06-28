#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n, i, x, sum=0, s;
    cin >> n;
    long long ar[200] = {0};
    for(i=0;i<n;i++)
    {
        cin >> x;
        ar[x]++;
    }
    for(i=0;i<200;i++)
    {
        s = ar[i]/2;
        sum = sum + s;
    }
    cout << sum << endl;
    return 0;
}
