#include <bits/stdc++.h>
using namespace std;

int main()
{
    set <vector<int> > s;
    int i, j;
    for(j=0;j<3;j++)
    {
        vector <int> v;
        for(i=1;i<=3;i++)
        {
            v.push_back(i);
        }
        s.insert(v);
    }
    for(auto it : s)
    {
        for(j=0;j<(it).size();j++)
        {
            cout << it[j] << " ";
        }
        cout << endl;
    }
    return 0;
}