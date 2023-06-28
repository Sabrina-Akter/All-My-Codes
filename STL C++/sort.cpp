#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N[10],i;
    for(i=0;i<10;i++)
    {
        cin >> N[i];
    }
    sort(N, N+10);
    for(i=0;i<10;i++)
    {
        cout << N[i];
    }
    return 0;
}
