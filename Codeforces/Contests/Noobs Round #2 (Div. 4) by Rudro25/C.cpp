#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    long long int t;
    cin >> t;
    while(t--)
    {
        long long int m, n;
        cin >>m >> n;
        unsigned char a=m, b=n, x, y;
        x = a^b;
        y = (a-1)^(b);
        if(y>x)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
    return 0;
}
