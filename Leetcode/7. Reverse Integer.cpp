#include <bits/stdc++.h>
using namespace std;

int reverse(int x) {
        long long i, n = x, m, neg=0, sum=0, p=1, f=0;
        vector <long long> v;
        int ans;
        if(n<0)
        {
            neg = 1;
            n = 0-(n);
        }
        while(n!=0)
        {
            m = n%10;
            n = n/10;
            if(m==0)
            {
                if(f==1)
                {
                    v.push_back(m);
                }
            }
            else
            {
                f=1;
                v.push_back(m);
            }
        }
        for(i=v.size()-1;i>=0;i--)
        {
           sum+=(v[i]*p); 
           if(sum>(2147483647))
           {
                sum = 0;
                break;
           }
           p*=10;
        }
        if(neg==1)
        {
            sum = 0-(sum);
        }
        ans = sum;
        cout << ans;
        return ans;
    }

int main()
{
    int x = -123;
    reverse(x);

    return 0;
}