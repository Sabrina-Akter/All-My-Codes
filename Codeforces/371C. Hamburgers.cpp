#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back
//#define N 100000

int main()
{
    fastt;
    string St;
    cin >> St;
    ll i, b=0, s=0, c=0, B, S, C, p1, p2, p3, P, ans=0,total,f1=0,f2=0,f3=0,x1=0,x2=0,x3=0;
    for(i=0;i<St.size();i++)
    {
        if(St[i]=='B')
        {
            b++;
        }
        else if(St[i]=='S')
        {
            s++;
        }
        else if(St[i]=='C')
        {
            c++;
        }
    }
    cin >> B >> S >> C >> p1 >> p2 >> p3 >> P;
    total = (b*p1)+(s*p2)+(c*p3);
    if(b==0)
    {
        B=0;
        f1=1;
    }
    if(s==0)
    {
        S=0;
        f2=1;
    }
    if(c==0)
    {
        C=0;
        f3=1;
    }
    while(1)
    {
        if(B<=0 && S<=0 && C<=0)
        {
            break;
        }
        else
        {
            B-=b;
            if(B<0 && x1==0)
            {
                if(P-((b-(b+B))*p1)>=0)
                {
                    P-=((b-(b+B))*p1);
                }
                else
                {
                    break;
                }
                x1=1;
            }
            else if(B<0 && f1==0)
            {
                if(P-(b*p1)>=0)
                {
                    P-=(b*p1);
                }
                else
                {
                    break;
                }
            }
            S-=s;
            if(S<0 && x2==0)
            {
                if(P-((s-(s+S))*p2)>=0)
                {
                    P-=((s-(s+S))*p2);
                }
                else
                {
                    break;
                }
                x2=1;
            }
            else if(S<0 && f2==0)
            {
                if(P-(s*p2)>=0)
                {
                    P-=(s*p2);
                }
                else
                {
                    P+=(b*p1);
                    break;
                }
            }
            C-=c;
            if(C<0 && x3==0)
            {
                if(P-((c-(c+C))*p3)>=0)
                {
                    P-=((c-(c+C))*p3);
                }
                else
                {
                    break;
                }
                x3=1;
            }
            else if(C<0 && f3==0)
            {
                if(P-(c*p3)>=0)
                {
                    P-=(c*p3);
                }
                else
                {
                    P+=(s*p2);
                    break;
                }
            }
        }
        ans++;
        /*cout << ans << " " << B << " " << S << " " << C << endl;
        cout << "P = " << P << endl;
        cout << "Total = " << total << endl;
        cout << endl;*/
    }
    cout << ans+(P/total) << endl;
    return 0;
}
