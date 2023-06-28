#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, n, i, sum=0;
    cin >> n;
    vector <int> N;
    for(i=0;i<n;i++)
    {
        cin >> x;
        N.push_back(x);
    }
    sort(N.begin(), N.end());
    int O[n];
    for(i=0;i<n;i++)
    {
        sum = sum + N[i];
        O[i] = sum;
    }
    int sum2=0, c =0;
    for(i=n-1;i>0;i--)
    {
        sum2 = sum2 + N[i];
        if(sum2<=O[i-1])
        {
            c++;
        }
    }
    cout << c+1 << endl;
    return 0;
}
