#include <bits/stdc++.h>
using namespace std;

int minimizedMaximum(int n, vector<int>& quantities) 
{
    int L = 0, R = *max_element(quantities.begin(), quantities.end()), M;
    double num, mid, div, cnt, last;
    while(1)
    {
        M = L + (R - L) / 2;
        cnt = 0;
        for(int i = 0; i < quantities.size(); i++)
        {
            num = quantities[i];
            mid = M;
            div = ceil(num / mid);
            cnt += div;
            if(cnt > n) break;
        }
        if(cnt > n)
        {
            L = M + 1;
        }
        else
        {
            R = M - 1;
        }
        if(M == last) return M;
        last = M;
    }
    return 0;
}

int main()
{
    

    return 0;
}