#include <bits/stdc++.h>
using namespace std;
    
    int check=0;
    vector <vector<int> > T;

    void f2(int ind, int k, vector <vector<int> >& t2, int n)
    {
        if(ind==T.size()-1)
        {
            if(t2.size()==k)
            {
                map <int, int> m;
                set <int> s;
                int flag=0;
                for(int i=0;i<t2.size();i++)
                {
                    for(int j=0;j<t2[i].size();j++)
                    {
                        m[t2[i][j]]++;
                        if(m[t2[i][j]]>1)
                        {
                            flag=1;
                            break;
                        }
                    }
                    if(flag==1)
                    {
                        break;
                    }
                }
                if(flag==0 && s.size()==n)
                {
                    check = 1;
                }
            }
        }
        else
        {
            f2(ind+1, k, t2, n);
            t2.push_back(T[ind+1]);
            f2(ind+1, k, t2, n);
            t2.pop_back();
        }
    }


    void f(vector<int>& nums, int k, int av, int ind, int sum, vector<int>& test)
    {
        if(ind==nums.size()-1)
        {
            if(sum==av)
            {
                T.push_back(test);
                for(int i=0;i<test.size();i++)
                {
                    cout << test[i] << " ";
                }
                cout << endl;
            }
        }
        else
        {
            f(nums, k, av, ind+1, sum, test);
            if(sum+nums[ind+1]<=av)
            {
                test.push_back(ind+1);
                f(nums, k, av, ind+1, sum+nums[ind+1], test);
                test.pop_back();
            }
        }
    }

    bool canPartitionKSubsets(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int i, sum=0, av, n=nums.size();
        vector <int> test;
        for(i=0;i<n;i++)
        {
            sum+=nums[i];
        }
        if(sum%k==0 && n>=k)
        {
            bool ans = false;
            av = sum/k;
            cout << av << endl;
            f(nums, k, av, -1, 0, test);
            vector <vector<int> > t2;
            cout << T.size() << endl;
            //f2(-1, k, t2, n);
            return ans;
        }
        else
        {
            return false;
        }
    }

int main()
{
    vector<int> nums = {10,10,7,8,10,4,9,7,9,10,4,6,7,1,8,5};
    int k=5;
    canPartitionKSubsets(nums, k);
    return 0;
}