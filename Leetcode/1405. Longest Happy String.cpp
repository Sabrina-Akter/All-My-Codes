#include <bits/stdc++.h>
using namespace std;

string longestDiverseString(int a, int b, int c) 
{
    priority_queue <pair<int, char>> pq;
    if (a > 0) pq.push({a, 'a'});
    if (b > 0) pq.push({b, 'b'});
    if (c > 0) pq.push({c, 'c'});
    string s;
    while(!pq.empty())
    {
        char c1 = pq.top().second;
        int n1 = pq.top().first;
        int size = s.size();
        cout << c1 << " " << n1 << endl;
        if(s.size() >= 2)
        {
            if(c1 == s[size - 1] && c1 == s[size - 2])
            {
                pq.pop();
                if(pq.empty()) break;
                else
                {
                    char c2 = pq.top().second;
                    int n2 = pq.top().first;
                    pq.pop();
                    s += c2;
                    n2--;
                    if(n2 > 0) pq.push({n2, c2});
                    pq.push({n1, c1});
                }
            }
            else
            {
                s += c1;
                pq.pop();
                n1--;
                if(n1 > 0) pq.push({n1, c1});
            }
        }
        else
        {
            s += c1;
            pq.pop();
            n1--;
            if(n1 > 0) pq.push({n1, c1});
        }
    }
    return s;
}

int main()
{
    

    return 0;
}