#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

int main()
{
    fastt;
    ll n, i, j, k;
    cin >> n;
    for(i=0;i<n;i++)
    {
        ll sum=0, flag=0, k=0;
        string s1, s2;
        char last='*';
        cin >> s1 >> s2;
        if(s2.size()<s1.size())
        {
            cout << "NO" << endl;
        }
        else
        {
            for(j=0;j<s1.size();j++)
            {
                for(;k<s2.size();k++)
                {
                    if(s1[j]==s2[k])
                    {
                        sum++;
                        k++;
                        break;
                    }
                    else if(s2[k]==last)
                    {
                        continue;
                    }
                    else if(s1[j]!=s2[k])
                    {
                        cout << "NO" << endl;
                        flag=1;
                        break;
                    }
                }
                last = s1[j];
                if(flag==1)
                {
                    break;
                }
            }
            if(flag==0)
            {
                for(k; k<s2.size(); k++)
                {
                    if(s2[k]!=last)
                    {
                        cout << "NO" << endl;
                        flag=1;
                        break;
                    }
                }
            }
            if(flag==0 && sum==s1.size())
            {
                cout << "YES" << endl;
            }
        }
    }
    return 0;
}
