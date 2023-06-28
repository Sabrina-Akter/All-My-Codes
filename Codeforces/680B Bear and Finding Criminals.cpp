#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define FOR(i,x,y) for(ll i=x;i<=y;i++)
#define vll vector <ll>
#define pb push_back

int main()
{
    fastt;
    ll A[600];
    fill(A, A+600, -1);
    ll i, n, a, count=0;
    cin >> n >> a;
    a--;
    a = a+200;
    for(i=0+200;i<n+200;i++)
    {
        cin >> A[i];
    }
    for(i=0;i<600;i++)
    {
        if(i==0 && A[a]==1)
        {
            count++;
        }
        else if((A[a+i]==1) && (A[a-i]==1))
        {
            count +=2;
        }
        else if(((A[a+i]==1) && (A[a-i]==-1)) || ((A[a+i]==-1) && (A[a-i]==1)))
        {
            count++;
        }
        else if(A[a+i]==-1 && A[a-i]==-1)
        {
            break;
        }
    }
    cout << count << endl;
    return 0;
}




