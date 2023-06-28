#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, i, c=0;
    cin >> n >> k;
    int N[n];
    for(i=0;i<n;i++)
    {
        cin >> N[i];
    }

    for(i=0;i<n;i++)
    {
        if((N[i]>=N[k-1]) && (N[i]!=0))
        {
            c++;
        }
    }
    cout << c << endl;
    return 0;
}
