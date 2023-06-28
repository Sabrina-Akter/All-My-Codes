#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int al[505][505];
int main()
{
    ll n,m,i,j;
    cin>>m>>n;
    char a,b;
    while(m--)
    {
      cin>>a>>b;
      al[a][b]=1;
      al[b][a]=1;
    }
    while(n--)
    {
        string s1,s2;
        cin>>s1>>s2;
       // cout<<s1<<" "<<s2<<endl;
        int c=0;
        for(i=0;i<s1.size();i++)
        {
           // cout<<al[s1[i]][s2[i]]<<endl;
            if(al[s1[i]][s2[i]]==1 || s1[i]==s2[i])
               c++;
        }
        if(c==s1.size() && c==s2.size())
          cout<<"yes"<<endl;
        else
          cout<<"no"<<endl;
    }
    return 0;
}