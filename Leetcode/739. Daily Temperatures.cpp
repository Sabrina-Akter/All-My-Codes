#include <bits/stdc++.h>
using namespace std;

vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> ans(temperatures.size());
        deque <pair<int, int> > d;
        int i;
        for(i=0;i<temperatures.size();i++)
        {
            if(i==0)
            {
                d.push_back({temperatures[i], i});
            }
            else
            {
                if(d.back().first>=temperatures[i])
                {
                    d.push_back({temperatures[i], i});
                }
                else
                {
                    while(temperatures[i]>d.back().first && d.empty()==false)
                    {
                        int index = d.back().second, dif = i-d.back().second;
                        ans[index] = dif;
                        if(d.size()==1)
                        {
                            d.pop_front();
                        }
                        else
                        {
                            d.pop_back();
                        }
                    }
                    d.push_back({temperatures[i], i});
                }
            }
        }
        for(i=0;i<ans.size();i++) 
        {
            cout << ans[i] << " ";
        }
        return ans;   
    }

int main()
{
    vector<int> temperatures = {73,74,75,71,69,72,76,73};
    dailyTemperatures(temperatures);
    return 0;
}