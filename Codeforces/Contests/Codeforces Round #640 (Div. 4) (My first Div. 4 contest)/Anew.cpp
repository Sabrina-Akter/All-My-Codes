#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, s, i, x, n,fl;
    double f;
    vector <int> v;
    cin >> t;
    while(t--)
    {
        fl=0;
        f = .1;
        char c[1000];
        cin >> c;
        s = strlen(c);
        for(i=s-1;i>=0;i--)
        {
            if(c[i]=='0')
            {
                f = f*10;
                n = 0;
                continue;
            }
            else if(c[i]=='1')
            {
                f = f*10;
                n = 1;
            }
            else if(c[i]=='2')
            {
                f = f*10;
                n = 2;
            }
            else if(c[i]=='3')
            {
                f = f*10;
                n = 3;
            }
            else if(c[i]=='4')
            {
                f = f*10;
                n = 4;
            }
            else if(c[i]=='5')
            {
                f = f*10;
                n = 5;
            }
            else if(c[i]=='6')
            {
                f = f*10;
                n = 6;
            }
            else if(c[i]=='7')
            {
                f = f*10;
                n = 7;
            }
            else if(c[i]=='8')
            {
                f = f*10;
                n = 8;
            }
            else if(c[i]=='9')
            {
                f = f*10;
                n = 9;
            }
            fl++;
            v.push_back(n*f);
        }
        cout << fl << endl;
        for(i=fl-1;i>=0;i--)
        {
            cout << v[i] << " ";
        }
        cout << endl;
        v.clear();
    }
    return 0;
}

