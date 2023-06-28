#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t, n, f, g, i, x, y;
    map <long long, char> m;
    vector <long long> v, X;
    char R = 'R', B= 'B';
    cin >> t;
    while(t--)
    {
        cin >> n;
        if(n==0)
        {
            cout << "0\n";
            continue;
        }
        if(n==1)
        {
            cin >> f;
            cout << "1\n";
            continue;
        }
        while(n--)
        {
            cin >> f;
            if(f>0)
            {
                m[f] = B;
                v.push_back(f);
            }
            else if(f<0)
            {
                g = f*(-1);
                m[g] = R;
                v.push_back(g);
            }
        }
        sort(v.begin(),v.end());
        x = 0;
        y = 0;
        for(i=0;i<v.size()-1;i++)
        {
            if((m[v[i]]=='R') && (m[v[i+1]]=='B') && x==0)
            {
                y++;
                x=1;
            }
            else if((m[v[i]]=='B') && (m[v[i+1]]=='R') && x==1)
            {
                y++;
                x=0;
            }
            else
            {
                y = 0;
                x = 0;
            }
            X.push_back(y);
            //cout << y << endl;
        }
        x = 0;
        y = 0;
        for(i=0;i<v.size()-1;i++)
        {
            if((m[v[i]]=='B') && (m[v[i+1]]=='R') && x==0)
            {
                y++;
                x=1;
            }
            else if((m[v[i]]=='R') && (m[v[i+1]]=='B') && x==1)
            {
                y++;
                x=0;
            }
            else
            {
                y = 0;
                x = 0;
            }
            X.push_back(y);
            //cout << y << endl;
        }
        sort(X.begin(), X.end());
        cout << X[X.size()-1]+1 << endl;
        m.clear();
        v.clear();
        X.clear();
    }
    return 0;
}
