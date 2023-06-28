#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s[10000];
    int n, t, i, j, l;
    cin >> n >> t >> s;
    l = strlen(s);
    for(i=0;i<t;i++)
    {
        for(j=0;j<l-1;j++)
        {
            if(s[j]=='B' && s[j+1]=='G')
            {
                s[j]='G';
                s[j+1]='B';
                j++;
            }
        }
    }
    cout << s << endl;
    return 0;
}
