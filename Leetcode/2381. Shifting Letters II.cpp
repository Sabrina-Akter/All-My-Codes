#include <bits/stdc++.h>
using namespace std;

string shiftingLetters(string s, vector<vector<int>>& shifts) 
{
    int n = s.size(), start, end, dir;
    vector <int> v(n + 1);
    for(int i = 0; i < shifts.size(); i++)
    {
        start = shifts[i][0];
        end = shifts[i][1];
        dir = shifts[i][2];
        if(dir == 1)
        {
            v[start]++;
            v[end + 1]--;
        }
        else
        {
            v[start]--;
            v[end + 1]++;
        }
    }
    int sum = 0, x;
    for(int i = 0; i < n; i++)
    {
        sum += v[i];
        x = (sum + (s[i] - 'a')) % 26;
        if(x >= 0) s[i] = 'a' + x;
        else s[i] = 'z' + x + 1;    
    }
    return s;
}

int main()
{
    

    return 0;
}