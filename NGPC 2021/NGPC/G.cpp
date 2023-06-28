#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <long long int>
#define pb push_back
#define nl endl
#define mod 1000000007
int main()
{
    fastt;
    ll i, j, f,n;
    cin>>n;
     ll sum=1;
     ll dif = 1,c8=0;
    for(i=7;i<=n;i++)
    {
        f=0;
        for(j=2;j<=i;j++)
        {
            ll temp=i;
            ll cc=0,c1=0;
           while(temp)
           {
               //cout<<"temp "<<temp<<endl;
               if(temp%j==1)
                  c1++;
                temp/=j;
                cc++;
           }
           if(c1==cc)
           {
            //  cout<<i<<"mod "<<j<<endl;
              f++;
           }
        }
        if(f>=2)
        {
          cout<<i<<endl;
          sum=((sum%mod)+i)%mod;
          cout<<"sum "<<sum<<endl;
          dif=i;
          c8++;
        }
       // cout<<c8<<endl;
    }
    return 0;
}