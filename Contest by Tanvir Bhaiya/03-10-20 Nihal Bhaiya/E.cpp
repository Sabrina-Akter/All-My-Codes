#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long y, k, n, i, f=0, p;
    vector <long long> v;
    cin >> y >> k >> n;
    for(i=1;i<=1000000000;i++)
    {
        p = k*i;
        if(p>y && p<=n)
        {
            f++;
            v.push_back(p-y);
        }
        if(p>n)
        {
            break;
        }
    }
    if(f==0)
    {
        cout << "-1\n";
    }
    else
    {
        for(i=0;i<v.size();i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }
}
