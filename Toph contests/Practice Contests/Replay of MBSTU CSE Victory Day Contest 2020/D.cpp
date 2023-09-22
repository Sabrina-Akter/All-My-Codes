#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n, q, i, j, sum, m, one=0, zero=0, O=0, Z=0;
    string s;
    cin >> n;
    if(n%2==0)
    {
        m=0;
        O=n/2;
        Z=n/2;
    }
    else
    {
        m=1;
    }
    cin >> s;
    cin >> q;
    long long ar[q];
    for(i=0;i<q;i++)
    {
        sum = 0;
        cin >> ar[i];
        if(s[i-1]=='0')
        {
            s[i-1] = 1;
        }
        else if(s[i-1]=='1')
        {
            s[i-1] = 0;
        }
        one = count(s.begin(), s.end(), '1');
        zero = count(s.begin(), s.end(), '0');
        if(m==0)
        {
            sum = sum + abs(O-one) + abs(Z-zero);
        }
    }
    return 0;
}
