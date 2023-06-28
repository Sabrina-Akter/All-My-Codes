#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, sum=0;
    cin >> n;
    int N[n+1];
    N[0] = 0;
    for(i=1;i<n+1;i++)
    {
        cin >> N[i];
    }
    for(i=1;i<n+1;i++)
    {
        if(N[i]!=N[i-1])
        {
            sum++;
        }
    }
    cout << sum << endl;
    return 0;
}

