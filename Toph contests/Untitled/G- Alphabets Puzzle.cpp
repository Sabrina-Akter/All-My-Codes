#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int A = 0, B = 0, C = 0, D = 0, E = 0, F = 0, G = 0, H = 0, I = 0, J = 0, K = 0, L = 0, M = 0, N = 0, O = 0, P = 0, Q = 0, R = 0, S = 0, T = 0, U = 0, V = 0, W = 0, X = 0, Y = 0, Z = 0;
    string s;
    cin >> s;
    int sum = 0, i, n = s.size();
    for(i=0;i<n;i++)
    {
        if(s[i]=='A')
        {
            A = 1;
        }
        if(s[i]=='B')
        {
            B = 1;
        }
        if(s[i]=='C')
        {
            C = 1;
        }
        if(s[i]=='D')
        {
            D = 1;
        }
        if(s[i]=='E')
        {
            E = 1;
        }
        if(s[i]=='F')
        {
            F = 1;
        }
        if(s[i]=='G')
        {
            G = 1;
        }
        if(s[i]=='H')
        {
            H = 1;
        }
        if(s[i]=='I')
        {
            I = 1;
        }
        if(s[i]=='J')
        {
            J = 1;
        }
        if(s[i]=='K')
        {
            K = 1;
        }
        if(s[i]=='L')
        {
            L = 1;
        }
        if(s[i]=='M')
        {
            M = 1;
        }
        if(s[i]=='N')
        {
            N = 1;
        }
        if(s[i]=='O')
        {
            O = 1;
        }
        if(s[i]=='P')
        {
            P = 1;
        }
        if(s[i]=='Q')
        {
            Q = 1;
        }
        if(s[i]=='R')
        {
            R = 1;
        }
        if(s[i]=='S')
        {
            S = 1;
        }
        if(s[i]=='T')
        {
            T = 1;
        }
        if(s[i]=='U')
        {
            U = 1;
        }
        if(s[i]=='V')
        {
            V = 1;
        }
        if(s[i]=='W')
        {
            W = 1;
        }
        if(s[i]=='X')
        {
            X = 1;
        }
        if(s[i]=='Y')
        {
            Y = 1;
        }
        if(s[i]=='Z')
        {
            Z = 1;
        }
    }
    sum = A+B+C+D+E+F+G+H+I+J+K+L+M+N+O+P+Q+R+S+T+U+V+W+X+Y+Z;
    cout << 26-sum << endl;
    return 0;
}
