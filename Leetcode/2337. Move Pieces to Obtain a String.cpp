#include <bits/stdc++.h>
using namespace std;

bool canChange(string start, string target) 
{
    vector <int> L, R;
    for(int i = 0; i < target.size(); i++)
    {
        if(target[i] == 'L') L.push_back(i);
        if(target[i] == 'R') R.push_back(i);
    }
    int pos1 = 0;
    int last_R = -1;
    for(int i = 0; i < start.size(); i++)
    {
        if(start[i] == 'L')
        {
            if(pos1 + 1 <= L.size() && last_R < L[pos1] && i > last_R && L[pos1] <= i)
            {
                swap(start[i], start[L[pos1]]);
                pos1++;
            }
        }
        if(start[i] == 'R') last_R = i;
    }
    int pos2 = R.size() - 1;
    int last_L = start.size();
    for(int i = start.size() - 1; i >= 0; i--)
    {
        if(start[i] == 'R')
        {
            if(pos2 - 1 >= -1 && last_L > R[pos2] && i < last_L && R[pos2] >= i)
            {
                swap(start[i], start[R[pos2]]);
                pos2--;
            }
        }
        if(start[i] == 'L') last_L = i;            
    }
    cout << start << endl;
    return (start == target);
}

int main()
{
    

    return 0;
}