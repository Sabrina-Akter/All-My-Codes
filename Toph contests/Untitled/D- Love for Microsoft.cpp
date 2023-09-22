#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int C = 0, F = 0, I = 0, M = 0, O = 0, R = 0, S = 0, T = 0;
    string s;
    cin >> s;
    int r, sum = 0, i, n = s.size();
    for(i=0;i<n;i++)
    {
        if(s[i]=='c')
        {
            C = 1;
        }
        if(s[i]=='f')
        {
            F = 1;
        }
        if(s[i]=='i')
        {
            I = 1;
        }
        if(s[i]=='m')
        {
            M = 1;
        }
        if(s[i]=='o')
        {
            O = 1;
        }
        if(s[i]=='r')
        {
            R = 1;
        }
        if(s[i]=='s')
        {
            S = 1;
        }
        if(s[i]=='t')
        {
            T = 1;
        }
    }
    sum = C+F+I+M+O+R+S+T;
    r = 8 - sum;
    if(r==0)
    {
        cout << "We both love Microsoft!\n";
    }
    else
    {
        cout << "Only I love Microsoft!\n";
    }
    return 0;
}

