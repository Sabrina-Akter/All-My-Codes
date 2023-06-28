#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

int main()
{
    fastt;
    ll t, r;
    cin >> t;
    for(r=1;r<=t;r++)
    {
        ll x, i, n, p1=1, p2=1, p3=1, sum=0, Max=-100000, num=0, max_num=-100000;
        cin >> n;
        for(i=1;i<n;i++)
        {
            num++;
            cin >> x;
            sum+=x;
            if(sum>=Max)
            {
                if(sum>Max)
                {
                    p2 = i+1;
                    p3 = p1;
                    Max = sum;
                    max_num = num;
                }
                else if(sum==Max && num>max_num)
                {
                    p2 = i+1;
                    p3 = p1;
                    max_num = num;
                }
            }
            if(sum<0)
            {
                p1 = i+1;
                sum=0;
                num=0;
            }
        }
        if(Max<=0)
        {
            cout << "Route " << r << " has no nice parts" << endl;
        }
        else
        {
            cout << "The nicest part of route " << r << " is between stops " << p3 << " and " << p2 << endl;
        }
    }
    return 0;
}
