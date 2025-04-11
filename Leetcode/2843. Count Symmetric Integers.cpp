#include <bits/stdc++.h>
using namespace std;

int countSymmetricIntegers(int low, int high) 
{
    int ans = 0;
    string s;
    for(int i = low; i <= high; i++)
    {
        s = to_string(i);
        if(s.size() % 2 == 0)
        {
            int sum1 = 0, sum2 = 0, n = s.size();
            for(int j = 0; j < n / 2; j++) sum1 += (s[j] - 'a' + 1);
            for(int j = n / 2; j < n; j++) sum2 += (s[j] - 'a' + 1);  
            if(sum1 == sum2) ans++;          
        }
    }
    return ans;
}

int main()
{
    

    return 0;
}