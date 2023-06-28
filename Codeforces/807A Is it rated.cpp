#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll n, i, a, b, rated=0, unrated=0, x;
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> a >> b;
        if(a!=b)
        {
            rated++;
        }
        if(i!=0)
        {
            if(a>x)
            {
                unrated++;
            }
        }
        x = a;
    }
    if(rated>0)
    {
        cout << "rated\n";
    }
    else if(unrated>0)
    {
        cout << "unrated\n";
    }
    if(rated==0 && unrated==0)
    {
        cout << "maybe\n";
    }
    return 0;
}
