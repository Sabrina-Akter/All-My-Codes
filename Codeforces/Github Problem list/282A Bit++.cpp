#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, c=0;
    cin >> n;
    while(n--)
    {
        string s;
        cin >> s;
        if(s.find("++")!=string::npos)
        {
            c++;
        }
        else if(s.find("--")!=string::npos)
        {
            c--;
        }
    }
    cout << c << endl;
    return 0;
}
