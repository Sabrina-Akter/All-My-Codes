#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,a,b,d;
    cin >> n;
    a = (n/2)-1;
    b = a+1;
    int N[n];
    for(i=0;i<n;i++)
    {
        cin >> N[i];
    }
    sort(N,N+n);
    d = N[b]-N[a];
    cout << d << endl;
    return 0;
}
