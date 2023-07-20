#include <bits/stdc++.h>
using namespace std;

    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector <int> ans;
        int i, j, x;
        for(i=0;i<asteroids.size();i++)
        {
            x = asteroids[i];
            if(ans.size()==0)
            {
                ans.push_back(x);
            }
            else if(abs(x)>abs(ans[ans.size()-1]))
            {
                j = ans.size()-1;
                while(1)
                {
                    if(j==-1)
                    {
                        break;
                    }
                    if(abs(x)>ans[j])
                    {
                        ans.pop_back();
                        ans.push_back(x);
                    }
                    else if(abs(x)<ans[j])
                    {
                        ans.pop_back();
                        break;
                    }
                    j = ans.size()-2;
                }
            }
            else if(abs)
            {
                ans.push_back(x);
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
    vector<int> asteroids = {8, -8};
    asteroidCollision(asteroids);
    return 0;
}
