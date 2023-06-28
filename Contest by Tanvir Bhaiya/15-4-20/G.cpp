#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string a,b;
    cin >> a >> b;

    if(a==b)
    {
        cout << "yes";
    }
    else if(a>b)
    {
        cout << "no 1";
    }
    else if(a<b)
    {
        cout << "no 2";
    }

    return 0;
}
