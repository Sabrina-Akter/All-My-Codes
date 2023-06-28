#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N[10],i;
    for(i=0;i<10;i++)
    {
        cin >> N[i];
    }
    find(N,N+10, 2) != (N+10)?
    cout << "yes":
    cout << "no";
    return 0;
}
