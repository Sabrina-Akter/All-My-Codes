#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int n, m, i, diff;
    vector <int> V;
    cin >> n >> m;
    int N[m];
    for(i=0;i<m;i++)
    {
        cin >> N[i];
    }
    sort(N, N+m);
    V.push_back(0);
    for(i=0;i<m-n+1;i++)
    {
        diff = ((N[i+n-1]) - N[i]);
        V.push_back(diff);
    }
    sort(V.begin(), V.end());
    if((V.size()==1) && (n>1))
    {
        cout << N[m-1]-N[0] << endl;
    }
    else if(n==1)
    {
        cout << N[0] << endl;
    }
    else
    {
        cout << V[1] << endl;
    }
    return 0;
}
