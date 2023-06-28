#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n, i, first, last, x=0, y=0;
    cin >> n;
    int N[n], M[n];
    for(i=0;i<n;i++)
    {
        cin >> N[i];
        M[i] = N[i];
    }
    sort(M, M+n);
    first = M[0], last = M[n-1];
    for(i=0;i<n;i++)
    {
        if(N[i]==last)
        {
            y = i;
            break;
        }
    }
    for(i=n-1;i>=0;i--)
    {
        if(N[i]==first)
        {
            x = i;
            break;
        }
    }
    if(x>y)
    {
        cout << (n-1-x) + (y);
    }
    else
    {
        cout << (((n-1)-(x+1)) + y);
    }

    return 0;
}
