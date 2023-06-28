#include <bits/stdc++.h>
using namespace std;
#define fasttio ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vv vector <ll>
#define pb push_back
int main()
{
  fasttio;
  ll n,t,i,j,k,sum,a,b;
  cin>>t;
  while(t--)
  {
      cin>>n;
      string s;
      cin>>s;
      sum=0;
      for(i=0;i<n;i++)
      {
          if(s[i] == '*')
          {
              if(i>0)
                s[i-1]='a';
              if(i<n-1)
                s[i+1]='a';
          }
      }
      for(i=1;i<n-1;i++)
      {
          if(s[i]=='.' && s[i-1]=='.' && s[i+1]=='.')
          {
             s[i]='*';
             s[i-1]='*';
             s[i+1]='*';
             sum++;
          }
      }
      for(i=0;i<n-1;i++)
      {
          if(s[i]=='.' && s[i+1]=='.')
          {
              s[i]='*';
              s[i+1]='*';
              sum++;
          }
      }
      for(i=1;i<n;i++)
      {
          if(s[i]=='.' && s[i-1]=='.')
          {
              s[i]='*';
              s[i-1]='*';
          }
      }
      for(i=0;i<n;i++)
      {
          if(s[i]=='.')
            sum++;
      }
      cout<<sum<<endl;

  }
}