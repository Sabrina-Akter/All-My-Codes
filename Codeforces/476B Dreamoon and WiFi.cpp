#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define FOR(i,x,y) for(ll i=x;i<=y;i++)
#define vll vector <ll>
#define pb push_back

ll add(vll Vec, ll Size)
{
    ll i, sum=0;
    for(i=0;i<Size;i++)
    {
        sum = sum+Vec[i];
    }
    return sum;
}

int main()
{
    fastt;
    ll i, sum1=0, sum2=0,q=0, N;
    double p, C, S;
    string s1, s2;
    vll v, Q;
    cin >> s1 >> s2;
    for(i=0;i<s1.size();i++)
    {
        if(s1[i]=='+')
        {
            sum1=sum1+1;
        }
        if(s1[i]=='-')
        {
            sum1=sum1-1;
        }
        if(s2[i]=='+')
        {
            sum2=sum2+1;
        }
        if(s2[i]=='-')
        {
            sum2=sum2-1;
        }
        if(s2[i]=='?')
        {
            q++;
            Q.pb(1);
        }
    }
    //cout << "S1 = " << sum1 << " and S2 = " << sum2 << " and q = " << q << endl;
    N = q;
    //cout << (add(Q,q)+sum2) << endl;
    v.pb(add(Q,q)+sum2);
    if(q==0)
    {
        if(sum1==sum2)
        {
            cout << "1.000000000000" << endl;
        }
        else
        {
            cout << "0.000000000000" << endl;
        }
    }
    else
    {
        while(1)
        {
            N--;
            if(N==-1)
            {
                break;
            }
            Q[N] = -1;
            sort(Q.begin(), Q.end());

            do{
                //cout << (add(Q,q)+sum2) << endl;
                v.pb(add(Q,q)+sum2);
            } while (next_permutation(Q.begin(), Q.end()));
            reverse(Q.begin(), Q.end());
        }
        C = count(v.begin(),v.end(),sum1);
        S = v.size();
        p = C/S;
        cout << fixed << setprecision(12) << p << endl;
    }
    return 0;
}
