#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long a, b, i, n, l_a=0,l_b=0,r_a=0,r_b=0,sum=0;
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> a >> b;
        if(a==1)
        {
            l_a++;
        }
        else if(a==0)
        {
            l_b++;
        }
        if(b==1)
        {
            r_a++;
        }
        else if(b==0)
        {
            r_b++;
        }
    }
    if(l_a>=l_b)
    {
        sum = sum + l_b;
    }
    else
    {
        sum = sum + l_a;
    }
    if(r_a>=r_b)
    {
        sum = sum + r_b;
    }
    else
    {
        sum = sum + r_a;
    }
    cout << sum << endl;
    return 0;
}
