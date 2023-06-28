#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while(t--)
    {
        float a, b, c, min, max, mid, x, y, z;
        cin >> a >> b >> c;
        vector <long long> v;
        v.push_back(a);
        v.push_back(b);
        v.push_back(c);
        sort(v.begin(), v.end());
        min = v[0];
        mid = v[1];
        max = v[2];
        x = max - min;
        y = sqrt((mid*mid)+(x*x));
        z = int(y);
        if(y==z)
        {
            cout << z << endl;
        }
        else
        {
            cout << z + 1 << endl;
        }
    }
}
