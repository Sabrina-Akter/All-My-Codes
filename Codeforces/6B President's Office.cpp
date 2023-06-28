#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a, b, i, j;
    char c;
    cin >> a >> b >> c;
    char ar[a][b];
    set <char> s;
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            cin >> ar[i][j];
        }
    }
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            if(ar[i][j]==c)
            {
                if(ar[i-1][j]!='.' && ar[i-1][j]!=c && i-1>=0)
                {
                    s.insert(ar[i-1][j]);
                }
                if(ar[i+1][j]!='.' && ar[i+1][j]!=c && i+1<a)
                {
                    s.insert(ar[i+1][j]);
                }
                if(ar[i][j+1]!='.' && ar[i][j+1]!=c && j+1<b)
                {
                    s.insert(ar[i][j+1]);
                }
                if(ar[i][j-1]!='.' && ar[i][j-1]!=c && j-1>=0)
                {
                    s.insert(ar[i][j-1]);
                }
            }
        }
    }
    cout << s.size() << endl;
    return 0;
}
