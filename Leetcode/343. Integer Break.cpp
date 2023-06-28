#include <bits/stdc++.h>
using namespace std;

int mx=1;
int x=0;
void f(int sum, int p, int n, vector <int>&v)
{
    if(x==10000)
    {
        return;
    }
    if(sum==n)
    {
        x++;
        mx = max(mx, p);
        // for(int i=0;i<v.size();i++)
        // {
        //     cout << v[i] << " ";
        // }
        // cout << endl;
        // cout << p << endl;
        return;
    }
    for(int i=n-1; i>=1; i--)
    {
        if(sum+i<=n)
        {
            
            v.push_back(i);
            sum+=i;
            p*=i;
            f(sum, p, n, v);
            v.pop_back();
            sum-=i;
            p/=i;
        }
    }
}

int integerBreak(int n) {
        vector <int> v;
        f(0, 1, n, v);
        cout << mx << endl;
        return mx;       
    }

int main()
{
    int n;
    cin >> n;
    integerBreak(n);
    return 0;
}