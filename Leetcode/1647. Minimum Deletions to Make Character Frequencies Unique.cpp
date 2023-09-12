#include <bits/stdc++.h>
using namespace std;

    int minDeletions(string s) {
        map <char, long long> m;
        map<long long, long long> cnt;
        map<long long, int> exist;
        long long i, j, sum=0;
        for(i=0;i<s.size();i++)
        {
            m[s[i]]++;
        }
        vector <long long> v;
        for(auto it=m.begin(); it!=m.end();it++)
        {
            long long num = it->second;
            cnt[num]++;
            exist[num] = 1;
            if(cnt[num]>=2)
            {
                v.push_back(num);
            }
        }
        sort(v.begin(),v.end());
        for(i=v.size()-1;i>=0;i--)
        {
            for(j=v[i]-1;j>=0;j--)
            {
                if(exist[j]==0)
                {
                    if(j!=0)
                    {
                        exist[j] = 1;
                    }
                    sum+=v[i]-j;
                    break;
                }
            }
        }
        cout << sum << endl;
        return sum;
    }

int main()
{
    string s;
    cin >> s;
    minDeletions(s);

    return 0;
}