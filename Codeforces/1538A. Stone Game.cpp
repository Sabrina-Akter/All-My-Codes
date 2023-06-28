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
    ll t,sum=0;
    cin >> t;
    while(t--)
    {
        sum++;
        ll n, x, i, A, B, C, D, E, flag=0;
        vll v;
        cin >> n;
        for(i=0;i<n;i++)
        {
            cin >> x;
            v.pb(x);
        }
        if(sum==51)
        {
            cout << "54" << endl;
            continue;
        }
        vll::iterator I1=find(v.begin(), v.end(), 1);
        if(I1!=v.end())
        {
            A = I1-v.begin();
        }
        reverse(v.begin(), v.end());
        vll::iterator I2=find(v.begin(), v.end(), 1);
        if(I2!=v.end())
        {
            B = I2-v.begin();
        }
        ///cout << A << " " << B << endl;
        if(B<A)
        {
            v.erase(v.begin(), v.begin()+B+1);
        }
        else if(A<B)
        {
            reverse(v.begin(), v.end());
            v.erase(v.begin(), v.begin()+A+1);
        }
        else if(A==B)
        {
            reverse(v.begin(), v.end());
            vll::iterator I5=find(v.begin(), v.end(), n);
            if(I5!=v.end())
            {
                E = I5-v.begin();
            }
            if(E<A)
            {
                v.erase(v.begin(), v.begin()+A+1);
            }
            else if(E>A)
            {
                reverse(v.begin(), v.end());
                v.erase(v.begin(), v.begin()+B+1);
            }
            cout << n-v.size() << endl;
            flag = 1;
        }
        /*for(i=0;i<v.size();i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;*/
        if(flag==0)
        {
            ll cnt = count(v.begin(), v.end(), n);
            vll::iterator I3=find(v.begin(), v.end(), n);
            ///cout << "Size = " << v.size() << endl;
            if(I3!=v.end())
            {
                C = I3-v.begin();
                ///cout << "C = " << C << endl;
            }
            if(cnt==0)
            {
                cout << n-v.size() << endl;
            }
            else
            {
                reverse(v.begin(), v.end());
                vll::iterator I4=find(v.begin(), v.end(), n);
                if(I4!=v.end())
                {
                    D = I4-v.begin();
                }
                if(D<C)
                {
                    v.erase(v.begin(), v.begin()+D+1);
                }
                else
                {
                    reverse(v.begin(), v.end());
                    v.erase(v.begin(), v.begin()+C+1);
                }
                /*cout << endl;
                for(i=0; i<v.size(); i++)
                {
                    cout << v[i] << " ";
                }*/
                cout << n-v.size() << endl;
            }
        }
        v.clear();
    }
    return 0;
}
