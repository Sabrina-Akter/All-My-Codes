#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x, c;
    char ch;
    cin >> n;
    cin >> ch;
    while(n--)
    {
        string s;
        getline(cin, s);
        c = count(s.begin(), s.end(), ' ');
        x = c*(c+1);
        cout << "1/" << x << endl;
    }
    return 0;
}
