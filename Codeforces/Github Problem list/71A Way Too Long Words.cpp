#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, l, i;
    char s[1000];
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> s;
        l = strlen(s);
        if(l>10)
        {
            cout << s[0] << l-2 << s[l-1] << endl;
        }
        else
        {
            cout << s << endl;
        }
    }

    return 0;
}
