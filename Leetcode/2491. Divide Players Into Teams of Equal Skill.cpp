#include <bits/stdc++.h>
using namespace std;

long long dividePlayers(vector<int>& skill) 
{
    long long sum = accumulate(skill.begin(), skill.end(), 0);
    long long n = skill.size();
    long long half = n / 2;
    if(sum % half != 0) return -1;
    else
    {
        long long avg = sum / half;
        unordered_map <int, int> mp;
        long long ans = 0, cnt = 0;
        for(int i = 0; i < n; i++)
        {
            if(mp[avg - skill[i]] >= 1)
            {
                ans += (skill[i] * (avg - skill[i]));
                mp[avg - skill[i]]--;
                cnt++;
            }
            else mp[skill[i]]++;
        }
        if(cnt != half) ans = -1;
        return ans;
    }
    return 0;
}

int main()
{
    

    return 0;
}