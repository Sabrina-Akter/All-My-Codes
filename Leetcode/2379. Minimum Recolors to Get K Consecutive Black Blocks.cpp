#include <bits/stdc++.h>
using namespace std;

int minimumRecolors(string blocks, int k) 
{
    int white = 0, mn = INT_MAX;
    for(int i = 0; i < blocks.size(); i++)
    {
        if(blocks[i] == 'W') white++;
        if(i >= k)
        {                
            if(blocks[i - k] == 'W') white--;
        }
        if(i >= k - 1) mn = min(mn, white);
    }
    return mn;
}

int main()
{
    

    return 0;
}