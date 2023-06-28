#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int i, s;
    string a, b;
    cin >> a >> b;
    for(i=0;i<a.size();i++)
    {
        if(a[i]==b[i])
        {
            cout << "0";
        }
        else
        {
            cout << "1";
        }
    }
    return 0;
}
