#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    string s = "ENWSENWS", S;
    long long int t, n, i, x, y;
    cin >> t;
    while(t--)
    {
        x = 0;
        cin >> n;
        cin >> S;
        for(i=0;i<n;i++)
        {
            if(S[i]=='0')
            {
                x--;
            }
            else if(S[i]=='1')
            {
                x++;
            }
        }
        y = x%4;
        if(y>=0)
        {
            cout << s[y] << endl;
        }
        else if(y<0)
        {
            cout << s[4+y] << endl;
        }
    }
    return 0;
}
