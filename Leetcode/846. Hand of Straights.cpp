#include <bits/stdc++.h>
using namespace std;

bool isNStraightHand(vector<int>& hand, int groupSize) 
{
    priority_queue <int, vector<int>, greater<int>> pq;
    unordered_map <int, int> freq;
    if(hand.size() % groupSize != 0) return false;
    for(int i = 0; i < hand.size(); i++)
    {
        freq[hand[i]]++;
    }
    for(auto &it : freq)
    {
        pq.push(it.first);
    }
    int x = 0, num;
    while(1)
    {
        if(pq.empty() == true) break;
        if(x == 0) num = pq.top();
        if(freq[num] >= 1) freq[num]--;
        else return false;
        if(freq[pq.top()] == 0) pq.pop();
        num++;
        x++;
        if(x == groupSize) x = 0;
    }
    return true;
}

int main()
{
    

    return 0;
}