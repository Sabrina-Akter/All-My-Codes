#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

int main()
{
    fastt;
    ll i, j, flag=0, br=0;
    vector <string> v;
    string s;
    while(getline(cin, s))
    {
        if(s.size()>=2)
        {
            if(s[0]=='/' && s[1]=='/')
            {
                continue;
            }
            else if(s[0]=='/' && s[1]=='*')
            {
                flag=1;
                continue;
            }
            else if(s[0]=='*' && s[1]=='/')
            {
                flag=0;
                continue;
            }
            else if(flag==1)
            {
                continue;
            }
            else if(flag==0)
            {
                v.pb(s);
            }
        }
        if(s=="}")
        {
            v.pb(s);
            break;
        }
    }
    flag=0;
    for(i=0;i<v.size();i++)
    {
        for(j=0;j<v[i].size();j++)
        {
            if(v[i][j]=='*' && v[i][j+1]=='//')
            {
                flag=0;
                br=1;
                break;
            }
            else if(v[i][j]=='//' && v[i][j+1]=='//')
            {
                if(j==0)
                {
                    br=1;
                }
                else
                {
                    br=0;
                }
                break;
            }
            else if(v[i][j]=='//' && v[i][j+1]=='*')
            {
                br=1;
                flag=1;
            }
            else if(flag==0)
            {
                br=0;
                cout << v[i][j];
            }
        }
        if(br==0)
        {
            cout << endl;
        }
    }
    return 0;
}
