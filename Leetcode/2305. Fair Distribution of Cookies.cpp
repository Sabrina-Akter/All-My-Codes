#include <bits/stdc++.h>
using namespace std;

    int mn=INT_MAX;
    int c[10];
    void f(int i, vector<int>& cookies, int k)
    {
        if(i==cookies.size()-1)
        {
            int j, f=0, mx = INT_MIN;
            for(j=0;j<k;j++)
            {
                if(c[j]==0)
                {
                    f=1;
                    break;
                }
                mx = max(mx, c[j]);
            }
            if(f==0)
            {
                mn = min(mn, mx);
            }
        }
        else
        {
            int j;
            for(j=0;j<k;j++)
            {
                c[j]+=cookies[i+1];
                f(i+1, cookies, k);
                c[j]-=cookies[i+1];
            }
        }
    }

    int distributeCookies(vector<int>& cookies, int k) {
        memset(c, 0, sizeof(c));
        f(-1, cookies, k);
        return mn; 
    }

int main()
{
    vector <int> cookies = {6,1,3,2,2,4,1,2};
    int k=3;
    cout << distributeCookies(cookies, k) << endl;

    return 0;
}