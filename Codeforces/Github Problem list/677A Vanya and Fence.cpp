#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, i, sum=0;
    cin >> n >> k;
    int N[n];
    for(i=0;i<n;i++)
    {
        cin >> N[n];
        if(N[n]>k)
        {
            sum = sum + 2;
        }
        else
        {
            sum = sum + 1;
        }
    }
    cout << sum << endl;
    return 0;
}

