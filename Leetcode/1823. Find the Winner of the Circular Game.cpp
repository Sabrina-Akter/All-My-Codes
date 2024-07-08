#include <bits/stdc++.h>
using namespace std;

int findTheWinner(int n, int k) 
{
    queue <int> Q;
    for(int i = 1; i <= n; i++)
    {
        Q.push(i);
    }
    
    while(1)
    {
        if(Q.size() == 1) return Q.front();
        int temp = k;
        while(temp--)
        {
            int x = Q.front();
            Q.pop();
            if(temp != 0)
            {
                Q.push(x);
            }
        } 
    }
    return 0;
}

int main()
{
    

    return 0;
}