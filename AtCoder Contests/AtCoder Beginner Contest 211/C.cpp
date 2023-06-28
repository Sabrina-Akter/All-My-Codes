#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

ll M=10e9+7;

int main()
{
    fastt;
    ll sum=0, i, j, k, l, m, n, o, p;
    string s;
    cin >> s;
    for(i=0;i<s.size();i++)
    {
        if(s[i]=='c')
        {
            for(j=i+1;j<s.size();j++)
            {
                if(s[j]=='h')
                {
                    for(k=j+1;k<s.size();k++)
                    {
                        if(s[k]=='o')
                        {
                            for(l=k+1;l<s.size();l++)
                            {
                                if(s[l]=='k')
                                {
                                    for(m=l+1;m<s.size();m++)
                                    {
                                        if(s[m]=='u')
                                        {
                                            for(n=m+1;n<s.size();n++)
                                            {
                                                if(s[n]=='d')
                                                {
                                                    for(o=n+1;o<s.size();o++)
                                                    {
                                                        if(s[o]=='a')
                                                        {
                                                            for(p=o+1;p<s.size();p++)
                                                            {
                                                                if(s[p]=='i')
                                                                {
                                                                    sum=(sum+1)%M;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    cout << sum << endl;
    return 0;
}
