#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t, n, k, i, f;
    vector <int> v;
    cin >> t;
    while(t--)
    {
        f = 1;
        cin >> n >> k;
        v.push_back(1);
        for(i=2;i<=100000000000;i++)
        {
            if(i%n!=0)
            {
                f++;
                v.push_back(i);
            }
            if(f==k)
            {
                break;
            }
        }
        cout << v[k-1] << endl;
        v.clear();
    }
    return 0;
}

