#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

int main()
{
    fastt;
    ll t;
    cin >> t;
    while(t--)
    {
        ll n, i, x, Max=0, pos=0, neg=0, zer=0, sum=0, max_neg=INT_MIN, all_sum=0, num=0, y=0;
        cin >> n;
        for(i=0;i<n;i++)
        {
            cin >> x;
            all_sum+=x;
            num++;
            max_neg=max(max_neg, x);
            if(x>0)
            {
                pos++;
            }
            else if(x==0)
            {
                zer++;
            }
            else if(x<0)
            {
                neg++;
            }
            sum+=x;
            Max=max(Max,sum);
            if(sum==Max)
            {
                y=num;
            }
            if(sum<1)
            {
                sum=0;
                num=0;
            }
        }
        if(pos==0)
        {
            cout << 1 << endl;
        }
        else if(pos==n)
        {
            cout << n << endl;
        }
        else
        {
            cout << y << endl;
        }
    }
    return 0;
}
