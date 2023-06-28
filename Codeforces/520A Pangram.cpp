#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, s;
    char C, D;
    set <char> c;
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> C;
        D = tolower(C);
        c.insert(D);
    }
    s = c.size();
    if(s==26)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
    return 0;
}
