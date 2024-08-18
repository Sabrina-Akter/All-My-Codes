#include <bits/stdc++.h>
using namespace std;

int nthUglyNumber(int n) 
{
    set <long long> s;
    s.insert(1);
    int cnt = 1;
    for(auto &it: s)
    {
        if(cnt == n) return it;
        s.insert(it * 2);
        s.insert(it * 3);
        s.insert(it * 5);
        cnt++;
    }
    return 0;
}

int main()
{
    

    return 0;
}