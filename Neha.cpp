#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define fastt ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define sp " "

int main()
{
    fastt;
    ll t = 1;
    cin>>t;
    for(ll i = 1; i<= t; i++)
    {
        ll n,res = 0, r1;
        double r2;
        ll cal;
        cin>>n;
        if(n <= 180000)
          cout<<"Case "<<i<<": 0"<<endl;

        else if(n >= 300000)
        {
            n = n - 180000;
             if(n  >= 300000)
             {
                n = n - 300000;
                r1 = (300000 * 0.1);
                r2 = (300000 * 0.1);
                if(r1!=r2)
                {
                    r1++;
                }
                res = res+ r1;
                if( n >= 400000)
                {
                    n = n -  400000;
                    r1 = (400000 * 0.15);
                    r2 = (400000 * 0.15);
                    if(r1!=r2)
                    {
                        r1++;
                    }
                    res+= r1;
                    if( n >= 300000 )
                    {
                        n = n - 300000;
                        r1 = (300000 * 0.2);
                        r2 = (300000 * 0.2);
                        if(r1!=r2)
                        {
                            r1++;
                        }
                        res+= r1;
                        if(n > 0)
                        {
                            r1 = (n*0.25);
                            r2 = (n*0.25);
                            if(r1!=r2)
                            {
                                r1++;
                            }
                            res+=r1;
                        }
                    }
                    else
                    {
                        r1 = (n*0.2);
                        r2 = (n*0.2);
                        if(r1!=r2)
                        {
                            r1++;
                        }
                        res+=r1;
                    }
                }
                else
                {
                    r1 = (n*0.15);
                    r2 = (n*0.15);
                    if(r1!=r2)
                    {
                        r1++;
                    }
                    res+=r1;
                }

            }
            else
            {
                r1 = (n*0.1);
                r2 = (n*0.1);
                if(r1!=r2)
                {
                    r1++;
                }
                res+=r1;
            }
            cout<<"Case "<<i<<": "<<res<<endl;
        }
        else
            cout<<"Case "<<i<<": 2000"<<endl;

    }
    return 0;
}
