#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    long long n, mid, x, y;
    vector <long long int> v;
    while(cin >> n)
    {
        v.push_back(n);
        sort(v.begin(), v.end());
        if(v.size()%2==0)
        {
            x = v.size()/2;
            y = x-1;
            mid = (v[x] + v[y])/2;
        }
        else
        {
            mid = v[v.size()/2];
        }
        cout << mid << endl;
    }
    return 0;
}
