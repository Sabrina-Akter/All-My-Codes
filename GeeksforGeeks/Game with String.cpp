class Solution 
{
public:
    int minValue(string &s, int k) 
    {
        map <char, int> mp;
        for(int i = 0; i < s.size(); i++)
        {
            mp[s[i]]++;
        }
        priority_queue <int> pq;
        for(auto &it : mp)
        {
            pq.push(it.second);
        }
        int x;
        while(k--)
        {
            x = pq.top();
            x--;
            pq.pop();
            if(x > 0) pq.push(x);
        }
        int sum = 0;
        while(!pq.empty())
        {
            x = pq.top();
            sum += (x * x);
            pq.pop();
        }
        return sum;
    }
};

