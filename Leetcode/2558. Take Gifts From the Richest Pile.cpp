#include <bits/stdc++.h>
using namespace std;

long long pickGifts(vector<int>& gifts, int k) 
{
    priority_queue <int> pq;
    for(int i = 0; i < gifts.size(); i++) pq.push(gifts[i]);
    int sq;
    while(k--)
    {
        sq = sqrt(pq.top());
        pq.pop();
        pq.push(sq);
    }
    long long ans = 0;
    while(!pq.empty())
    {
        ans += pq.top();
        pq.pop();
    }
    return ans;
}

int main()
{
    

    return 0;
}