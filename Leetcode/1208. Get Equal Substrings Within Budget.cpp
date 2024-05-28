#include <bits/stdc++.h>
using namespace std;

int equalSubstring(string s, string t, int maxCost) 
{
    vector <int> dif;
    queue <int> Q;
    int sum = 0, x;
    int ans = 0;
    for(int i = 0; i < s.size(); i++)
    {
        x = abs(s[i] - t[i]);
        dif.push_back(x);
        sum += x;
        Q.push(x);
        while(1)
        {
            if(sum > maxCost && Q.size() != 0)
            {
                sum -= Q.front();
                Q.pop();
            }
            else
            {
                break;
            }
        }
        int Qsize = Q.size();
        ans = max(ans, Qsize);
        cout << endl;
    }
    return ans;
}

int main()
{
    

    return 0;
}