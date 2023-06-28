#include <bits/stdc++.h>
using namespace std;

int main()
{
    long N, i, n, x, Q, y, z, sum=0;
    vector <long> v;
    cin >> N;
    for(i=0;i<N;i++)
    {
        cin >> n;
        sum = sum + n;
        v.push_back(sum);
    }
    cin >> Q;
    for(i=0;i<Q;i++)
    {
        cin >> y >> z;
        if(y==0)
        {
            cout << v[z] << endl;
        }
        else
        {
            cout << v[z] - v[y-1] << endl;
        }
    }
    return 0;
}
