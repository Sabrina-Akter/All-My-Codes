#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

map <ll, ll> L, R;
int main()
{
    fastt;
    ll t, i, a, b, first, second, x=0, y=1;
    vll v1, v2;
    cin >> t;
    ll A[t];
    for(i=0;i<t;i++)
    {
        cin >> a >> b;
        if(a==0)
        {
            a=-1;
        }
        if(b==0)
        {
            b=-1;
        }
        R[a]=b;
        R[b];
        L[b]=a;
        L[a];
        /*cout << "R[" << a << "] = " << R[a] << endl;
        cout << "R[" << b << "] = " << R[b] << endl;
        cout << "L[" << b << "] = " << L[b] << endl;
        cout << "L[" << a << "] = " << L[a] << endl;*/
        if(L[a]==0)
        {
            v1.pb(a);
        }
        if(L[b]==0)
        {
            v1.pb(b);
        }
        if(L[a]==-1)
        {
            v2.pb(a);
        }
        if(L[b]==-1)
        {
            v2.pb(b);
        }
    }
    for(i=0;i<v1.size();i++)
    {
        if(L[v1[i]]==0)
        {
            first = v1[i];
            break;
        }
    }
    for(i=0;i<v2.size();i++)
    {
        if(L[v2[i]]==-1)
        {
            second = v2[i];
            break;
        }
    }
    /*cout << "First = " << first << endl;
    cout << "Second = " << second << endl;*/
    while(1)
    {
        A[x] = first;
        first = R[first];
        x+=2;
        if(x>=t)
        {
            break;
        }
    }
    while(1)
    {
        A[y] = second;
        second = R[second];
        y+=2;
        if(y>=t)
        {
            break;
        }
    }
    for(i=0;i<t;i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;
    return 0;
}
