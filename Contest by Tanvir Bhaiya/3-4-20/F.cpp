#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, c = 0;
    cin >> n;
    int N[n];
    for(i=0;i<n;i++)
    {
        cin >> N[i];
    }
    for(i=1;i<n-1;i++)
    {
        if((N[i]>N[i+1]) && (N[i]<N[i-1]))
        {
            c++;
        }
        else if((N[i]<N[i+1]) && (N[i]>N[i-1]))
        {
            c++;
        }
    }
    cout << c << endl;
    return 0;
}
