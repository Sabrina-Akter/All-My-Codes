#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N[10],i;
    for(i=0;i<10;i++)
    {
        cin >> N[i];
    }
    cout << accumulate(N,N+10, 0);
    return 0;
}
