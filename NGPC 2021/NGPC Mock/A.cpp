#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int
#define vll vector <long, long>
#define pb push_back
#define nl endl

int main()
{
    ll t=10,n, x, mid, num, cnt=0, l, r;
    cin >> n >> x;
    num = n;
    l = 1, r = n;
    while(t--)
    {
        mid = (l+r)/2;
        cout << "mid = " << mid << nl;
        if (abs(mid-n)==1 && (x==l || x==n))
        {
            cnt++;
            break;
        }
        else if(x>mid)
        {
            cnt++;
            l = mid;
            if(l==r)
            {
                break;
            }
        }
        else if(x<mid)
        {
            cnt++;
            r = mid;
            if(l==r)
            {
                break;
            }
        }
        else if(x==mid)
        {
            cnt = cnt+2;
            break;
        }
        cout << abs(mid-n) << nl;
    }
    cout << cnt << nl;
}