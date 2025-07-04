class Solution 
{
    public:
    int countAtMostK(vector<int> &arr, int k) 
    {
        int n = arr.size(), t = min(n, k), last = 0;
        int sum = t * n - (t * (t - 1)) / 2;
        unordered_map <int, int> mp;
        for(int i = 0; i < n; i++)
        {
            mp[arr[i]]++;
            while(mp.size() == k + 1)
            {
                mp[arr[last]]--;
                if(mp[arr[last]] == 0) mp.erase(arr[last]);
                last++;
            }
            if(i - last + 1 > k && mp.size() <= k) sum += (i - last + 1 - k);
        }
        return sum;
    }
};
