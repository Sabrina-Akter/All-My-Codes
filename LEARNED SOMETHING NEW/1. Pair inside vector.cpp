#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll i;
    vector <pair<int, int> > v;
    v.push_back(make_pair(4, 0));
    v.push_back(make_pair(5, 1));
    v.push_back(make_pair(1, 10));
    v.push_back(make_pair(3, 8));
    v.push_back(make_pair(2, 9));
    sort(v.begin(), v.end());
    for(i=0;i<5;i++)
    {
        cout << v[i].first << " " << v[i].second << endl;
    }
    return 0;
}
