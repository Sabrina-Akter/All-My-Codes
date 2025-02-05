#include <bits/stdc++.h>
using namespace std;

bool areAlmostEqual(string s1, string s2) 
{
    int swap1 = 0, swap2 = 0, cnt = 0;
    for(int i = 0; i < s1.size(); i++) 
    {
        if(s1[i] != s2[i])
        {
            cnt++;
            if(cnt == 1)
            {
                swap1 = i;
                swap2 = i;
            }                
            else if(cnt == 2) swap2 = i;
            else return false;
        }
    }
    swap(s1[swap1], s1[swap2]);
    return s1 == s2;
}

int main()
{
    

    return 0;
}