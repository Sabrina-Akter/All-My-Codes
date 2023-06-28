#include <bits/stdc++.h>
using namespace std;

int main()
{
    char c[200];
    int al[26] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int s, i, sum=0;
    cin >> c;
    s = strlen(c);
    for(i=0;i<s;i++)
    {
        if(c[i]=='a')
        {
            al[0] = 1;
        }
        else if(c[i]=='b')
        {
            al[1] = 1;
        }
        else if(c[i]=='c')
        {
            al[2] = 1;
        }
        else if(c[i]=='d')
        {
            al[3] = 1;
        }
        else if(c[i]=='e')
        {
            al[4] = 1;
        }
        else if(c[i]=='f')
        {
            al[5] = 1;
        }
        else if(c[i]=='g')
        {
            al[6] = 1;
        }
        else if(c[i]=='h')
        {
            al[7] = 1;
        }
        else if(c[i]=='i')
        {
            al[8] = 1;
        }
        else if(c[i]=='j')
        {
            al[9] = 1;
        }
        else if(c[i]=='k')
        {
            al[10] = 1;
        }
        else if(c[i]=='l')
        {
            al[11] = 1;
        }
        else if(c[i]=='m')
        {
            al[12] = 1;
        }
        else if(c[i]=='n')
        {
            al[13] = 1;
        }
        else if(c[i]=='o')
        {
            al[14] = 1;
        }
        else if(c[i]=='p')
        {
            al[15] = 1;
        }
        else if(c[i]=='q')
        {
            al[16] = 1;
        }
        else if(c[i]=='r')
        {
            al[17] = 1;
        }
        else if(c[i]=='s')
        {
            al[18] = 1;
        }
        else if(c[i]=='t')
        {
            al[19] = 1;
        }
        else if(c[i]=='u')
        {
            al[20] = 1;
        }
        else if(c[i]=='v')
        {
            al[21] = 1;
        }
        else if(c[i]=='w')
        {
            al[22] = 1;
        }
        else if(c[i]=='x')
        {
            al[23] = 1;
        }
        else if(c[i]=='y')
        {
            al[24] = 1;
        }
        else if(c[i]=='z')
        {
            al[25] = 1;
        }
    }
    for(i=0;i<26;i++)
    {
        sum = sum + al[i];
    }
    if(sum%2==0)
    {
        cout << "CHAT WITH HER!\n";
    }
    else
    {
        cout << "IGNORE HIM!\n";
    }
    return 0;
}
