#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector <vector<int> > v;
        set <vector<int> > s;
        int i, j, front, back, n=nums.size(), S=s.size(), p=0; 
        long long t1, t2;
        for(i=0;i<n;i++)
        {
            t1 = target - nums[i];
            for(j=i+1;j<n;j++)
            {
                t2 = t1 - nums[j];
                front = j+1;
                back = n-1;
                while(front<back)
                {
                    long long r = nums[front]+nums[back];
                    if(r==t2)
                    {
                        vector <int> test(4,0);
                        test[0] = nums[i];
                        test[1] = nums[j];
                        test[2] = nums[front];
                        test[3] = nums[back];
                        sort(test.begin(),test.end());
                        s.insert(test);
                        if(p!=s.size())
                        {
                            v.push_back(test);
                        }
                        p = s.size();
                        front++;
                    }
                    else if(r<t2)
                    {
                        front++;
                    }
                    else if(r>t2)
                    {
                        back--;
                    }
                }
            }
        }
        return v;
    }

int main()
{
    vector <int> v = {1,0,-1,0,-2,2};
    int t = 0;
    fourSum(v, t);

    return 0;
}