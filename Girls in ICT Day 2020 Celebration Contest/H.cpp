#include <bits/stdc++.h>
using namespace std;

int main()
{
    int s,i, S;
    vector <char> CH;
    char c[100];
    char x, y;
    while(scanf("%s", c)==1)
    {
        y = '0';
        s = strlen(c);
        for(i=0;i<s;i++)
        {
            if(c[i]=='A' || c[i]=='E' || c[i]=='I' || c[i]=='O' || c[i]=='U' || c[i]=='H' || c[i]=='W' || c[i]=='Y')
            {
                y = '0';
                continue;
            }
            if(c[i]==c[i-1])
            {
                continue;
            }
            if(c[i]=='B' || c[i]=='F' || c[i]=='P' || c[i]=='V')
            {
                x = '1';
                if(x==y)
                {
                    continue;
                }
                CH.push_back(x);
                y = x;
            }
            else if(c[i]=='C' || c[i]=='G' || c[i]=='J' || c[i]=='K' || c[i]=='Q' || c[i]=='S' || c[i]=='X' || c[i]=='Z')
            {
                x = '2';
                if(x==y)
                {
                    continue;
                }
                CH.push_back(x);
                y = x;
            }
            else if(c[i]=='D' || c[i]=='T')
            {
                x = '3';
                if(x==y)
                {
                    continue;
                }
                CH.push_back(x);
                y = x;
            }
            else if(c[i]=='L')
            {
                x = '4';
                if(x==y)
                {
                    continue;
                }
                CH.push_back(x);
                y = x;
            }
            else if(c[i]=='M' || c[i]=='N')
            {
                x = '5';
                if(x==y)
                {
                    continue;
                }
                CH.push_back(x);
                y = x;
            }
            else if(c[i]=='R')
            {
                x = '6';
                if(x==y)
                {
                    continue;
                }
                CH.push_back(x);
                y = x;
            }
        }
        S = CH.size();
        for(i=0;i<S;i++)
        {
            cout << CH[i];
        }
        cout << endl;
        CH.clear();
    }
    return 0;
}
