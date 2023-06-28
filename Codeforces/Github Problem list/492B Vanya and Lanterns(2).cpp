#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a,b,i,n,f1=0,f2=0,x,s1,s2;
    long double d;
    cin >> a >> b;
    vector <long double> N, M;
    for(i=0;i<a;i++)
    {
        cin >> n;
        if(n==0)
        {
            f1=1;
        }
        else if(n==b)
        {
            f2=1;
        }
        N.push_back(n);
    }
    sort(N.begin(), N.end());
    s1 = N.size();
    if(f1==0)
    {
        x = 0 - N[0];
        N.push_back(x);
    }
    if(f2==0)
    {
        x = N[s1-1] + ((b - N[s1-1])*2);
        N.push_back(x);
    }
    sort(N.begin(), N.end());
    s1 = N.size();
    for(i=0;i<s1-1;i++)
    {
        d = (N[i+1] - N[i])/2.0;
        M.push_back(d);
    }
    sort(M.begin(),M.end());
    s2 = M.size();
    cout << fixed << setprecision(10) << M[s2-1] << endl;
    return 0;
}

