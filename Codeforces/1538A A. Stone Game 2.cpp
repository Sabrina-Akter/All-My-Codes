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
    ll t;
    cin >> t;
    while(t--)
    {
        ll n, i, x, A=0, B=0, C;
        vll v1, v2, v3, v4, N;
        cin >> n;
        for(i=0;i<n;i++)
        {
            cin >> x;
            v1.pb(x);
            v2.pb(x);
            v3.pb(x);
            v4.pb(x);
        }
        ///1
        while(1)
        {
            if(v1.size()==0)
            {
                break;
            }
            if(v1[0]==1)
            {
                A = 1;
                v1.erase(v1.begin());
            }
            else if(v1[0]==n)
            {
                B = 1;
                v1.erase(v1.begin());
            }
            else if(A==1 && B==1)
            {
                break;
            }
            else
            {
                v1.erase(v1.begin());
            }
        }
        N.pb(n-v1.size());
        ///2
        A = 0, B = 0;
        reverse(v2.begin(), v2.end());
        while(1)
        {
            if(v2.size()==0)
            {
                break;
            }
            if(v2[0]==1)
            {
                A = 1;
                v2.erase(v2.begin());
            }
            else if(v2[0]==n)
            {
                B = 1;
                v2.erase(v2.begin());
            }
            else if(A==1 && B==1)
            {
                break;
            }
            else
            {
                v2.erase(v2.begin());
            }
        }
        N.pb(n-v2.size());
        ///3
        A=0, B=0;
        while(1)
        {
            if(v3.size()==0)
            {
                break;
            }
            if(v3[0]==1)
            {
                A = 1;
                v3.erase(v3.begin());
                reverse(v3.begin(), v3.end());
                C = count(v3.begin(), v3.end(), n);
                if(C==0)
                {
                    break;
                }
            }
            else if(A==1 && v3[0]==n)
            {
                B = 1;
                v3.erase(v3.begin());
            }
            else if(A==1 && B==1)
            {
                break;
            }
            else
            {
                v3.erase(v3.begin());
            }
        }
        N.pb(n-v3.size());
        ///4
        A=0, B=0;
        while(1)
        {
            if(v4.size()==0)
            {
                break;
            }
            if(v4[0]==n)
            {
                A = 1;
                v4.erase(v4.begin());
                reverse(v4.begin(), v4.end());
                C = count(v4.begin(), v4.end(), 1);
                if(C==0)
                {
                    break;
                }
            }
            else if(A==1 && v4[0]==1)
            {
                B = 1;
                v4.erase(v4.begin());
            }
            else if(A==1 && B==1)
            {
                break;
            }
            else
            {
                v4.erase(v4.begin());
            }
        }
        N.pb(n-v4.size());
        ///Ans
        cout << *min_element(N.begin(), N.end()) << endl;
    }
    return 0;
}
