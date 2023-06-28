#include <bits/stdc++.h>
using namespace std;

int countArrangement(int n) {
        vector<int>even, odd;
        int i, cnt=0;
        for(i=1;i<=n;i++) 
        {
            if(i%2==0)
            {
                even.push_back(i);
            }
            else
            {
                odd.push_back(i);
            }
        } 
        //even
        do
        {
            int f=0;
            for(i=2;i<=n;i+=2)
            {
                if((even[i]%i==0) || (i%even[i]==0))
                {
                    continue;
                }
                else
                {
                    f=1;
                    break;
                }
            }
            if(f==0)
            {
                cnt++;
            }
        } while (next_permutation(even.begin(),even.end()));
        //odd
        do
        {
            int f=0;
            for(i=1;i<=n;i+=2)
            {
                if((odd[i]%i==0) || (i%odd[i]==0))
                {
                    continue;
                }
                else
                {
                    f=1;
                    break;
                }
            }
            if(f==0)
            {
                cnt++;
            }
        } while (next_permutation(odd.begin(),odd.end()));
        cout << cnt << endl;
        return cnt;
    }

int main()
{
    int n = 11;
    countArrangement(n);
    return 0;
}