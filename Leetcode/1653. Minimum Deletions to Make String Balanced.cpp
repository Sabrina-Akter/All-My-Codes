#include <bits/stdc++.h>
using namespace std;

int minimumDeletions(string s) 
{
    if(s.size() == 1) return 0;
    int n = s.size();
    vector <int> cntA(n + 1), cntB(n);
    int a = 0, b = 0;
    for(int i = 0; i < n; i++)
    {
        if(s[i] == 'b') 
        {
            b++;
        }
        cntB[i] = b;
    }
    for(int i = n - 1; i >= 0; i--)
    {
        if(s[i] == 'a')
        {
            a++;
        }
        cntA[i] = a;
    }
    cntA[n] = 0;
    int mn = INT_MAX, A, B, sum;
    mn = min(mn, cntA[0]);
    for(int i = 0; i < n; i++)
    {
        B = cntB[i];
        A = cntA[i + 1];
        sum = A + B;
        mn = min(mn, sum);
    }
    return mn;
}

int main()
{
    

    return 0;
}