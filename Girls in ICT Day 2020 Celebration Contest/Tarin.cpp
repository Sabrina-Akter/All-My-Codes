#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n,i,j;
    char c[20];
    while(scanf("%s", c)==1)
    {
        if(c[i]=='B' || c[i]=='F' || c[i]=='P' || c[i]=='V')
        {
            cout<<"1";
            while(c[i+1]=='B' || c[i+1]=='F' || c[i+1]=='P' || c[i+1]=='V')
            {
                i++;
            }
        }
        else if(c[i]=='C' || c[i]=='G' || c[i]=='J' || c[i]=='K' || c[i]=='Q' || c[i]=='S' || c[i]=='X' || c[i]=='Z')
        {
            cout<<"2";
            while(c[i+1]=='C' || c[i+1]=='G' || c[i+1]=='J' || c[i+1]=='K' || c[i+1]=='Q' || c[i+1]=='S' || c[i+1]=='X' || c[i+1]=='Z')
            {
                i++;
            }
        }
        else if(c[i]=='D' || c[i]=='T')
        {
            cout<<"3";
            while(c[i+1]=='D' || c[i+1]=='T')
            {
                i++;
            }
        }
        else if(c[i]=='L')
        {
            cout<<"4";
            while(c[i+1]=='L')
            {
                i++;
            }
        }
        else if(c[i]=='M' || c[i]=='N')
        {
            cout<<"5";
            while(c[i+1]=='M' || c[i+1]=='N')
            {
                i++;
            }

        }
        else if(c[i]=='R')
        {
            cout<<"6";
            while(c[i+1]=='R')
            {
                i++;
            }
    }
}
}
