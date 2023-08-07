#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, i;
    cin >> n;
    long long N[n];
    for(i=0;i<n;i++)
    {
        cin >> N[i];
    }
    cout << *max_element(N,N+n) << endl;
    return 0;
}
