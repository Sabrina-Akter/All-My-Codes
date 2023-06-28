#include <bits/stdc++.h>
using namespace std;

vector<int> beautifulArray(int n) {
        vector<int>v;
        int i;
        for(i=1;i<=n;i++)
        {
            v.push_back(i);
            if(i%2==0)
            {
                swap(v[v.size()-1], v[v.size()-2]);
            }
        }
        return v;
    }

int main()
{
    int n = 4;
    beautifulArray(n);
    return 0;
}