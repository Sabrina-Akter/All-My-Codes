#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    string a, b;
    cin >> a >> b;
    if(a!=b)
    {
        cout << max(a.size(), b.size()) << endl;
    }
    else
    {
        cout << -1 << endl;
    }
    return 0;
}
