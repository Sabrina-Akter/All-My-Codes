class Solution 
{
    public:
    bool validgroup(vector<int> &arr, int k) 
    {
        if(arr.size() % k != 0) return false;
        map <int, int> mp;
        for(int i = 0; i < arr.size(); i++)
        {
            mp[arr[i]]++;
        }
        int x, last;
        while(1)
        {
            x = 0;
            for(auto &it : mp)
            {
                if(x == 0)
                {
                    x = 1;
                    last = it.first;
                    mp[it.first]--;
                    if(mp[it.first] == 0) mp.erase(it.first);
                }
                else if(x == k)
                {
                    break;
                }
                else if(last + 1 == it.first)
                {
                    x++;
                    last = it.first;
                    mp[it.first]--;
                    if(mp[it.first] == 0) mp.erase(it.first);
                }
                else if(last + 1 != it.first)  return false;
            }
            if(mp.empty())
            {
                if(x != k) return false;
                break;
            }
        }
        return true;
    }
};