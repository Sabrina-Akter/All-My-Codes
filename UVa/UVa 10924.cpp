#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

int main()
{
    char ch[1000];
    int l, i, sum, x, f;
    while(scanf("%s", ch)==1)
    {
        f = 0;
        sum = 0;
        l = strlen(ch);
        for(i=0;i<l;i++)
        {
            if(ch[i]=='a')
            {
                x = 1;
            }
            else if(ch[i]=='b')
            {
                x = 2;
            }
            else if(ch[i]=='c')
            {
                x = 3;
            }
            else if(ch[i]=='d')
            {
                x = 4;
            }
            else if(ch[i]=='e')
            {
                x = 5;
            }
            else if(ch[i]=='f')
            {
                x = 6;
            }
            else if(ch[i]=='g')
            {
                x = 7;
            }
            else if(ch[i]=='h')
            {
                x = 8;
            }
            else if(ch[i]=='i')
            {
                x = 9;
            }
            else if(ch[i]=='j')
            {
                x = 10;
            }
            else if(ch[i]=='k')
            {
                x = 11;
            }
            else if(ch[i]=='l')
            {
                x = 12;
            }
            else if(ch[i]=='m')
            {
                x = 13;
            }
            else if(ch[i]=='n')
            {
                x = 14;
            }
            else if(ch[i]=='o')
            {
                x = 15;
            }
            else if(ch[i]=='p')
            {
                x = 16;
            }
            else if(ch[i]=='q')
            {
                x = 17;
            }
            else if(ch[i]=='r')
            {
                x = 18;
            }
            else if(ch[i]=='s')
            {
                x = 19;
            }
            else if(ch[i]=='t')
            {
                x = 20;
            }
            else if(ch[i]=='u')
            {
                x = 21;
            }
            else if(ch[i]=='v')
            {
                x = 22;
            }
            else if(ch[i]=='w')
            {
                x = 23;
            }
            else if(ch[i]=='x')
            {
                x = 24;
            }
            else if(ch[i]=='y')
            {
                x = 25;
            }
            else if(ch[i]=='z')
            {
                x = 26;
            }
            else if(ch[i]=='A')
            {
                x = 27;
            }
            else if(ch[i]=='B')
            {
                x = 28;
            }
            else if(ch[i]=='C')
            {
                x = 29;
            }
            else if(ch[i]=='D')
            {
                x = 30;
            }
            else if(ch[i]=='E')
            {
                x = 31;
            }
            else if(ch[i]=='F')
            {
                x = 32;
            }
            else if(ch[i]=='G')
            {
                x = 33;
            }
            else if(ch[i]=='H')
            {
                x = 34;
            }
            else if(ch[i]=='I')
            {
                x = 35;
            }
            else if(ch[i]=='J')
            {
                x = 36;
            }
            else if(ch[i]=='K')
            {
                x = 37;
            }
            else if(ch[i]=='L')
            {
                x = 38;
            }
            else if(ch[i]=='M')
            {
                x = 39;
            }
            else if(ch[i]=='N')
            {
                x = 40;
            }
            else if(ch[i]=='O')
            {
                x = 41;
            }
            else if(ch[i]=='P')
            {
                x = 42;
            }
            else if(ch[i]=='Q')
            {
                x = 43;
            }
            else if(ch[i]=='R')
            {
                x = 44;
            }
            else if(ch[i]=='S')
            {
                x = 45;
            }
            else if(ch[i]=='T')
            {
                x = 46;
            }
            else if(ch[i]=='U')
            {
                x = 47;
            }
            else if(ch[i]=='V')
            {
                x = 48;
            }
            else if(ch[i]=='W')
            {
                x = 49;
            }
            else if(ch[i]=='X')
            {
                x = 50;
            }
            else if(ch[i]=='Y')
            {
                x = 51;
            }
            else if(ch[i]=='Z')
            {
                x = 52;
            }
            sum = sum + x;
        }
        for(i=2;i<sum;i++)
        {
            if(sum%i==0)
            {
                f = 1;
                break;
            }
        }
        if(f==0 || sum==0)
        {
            printf("It is a prime word.\n");
        }
        else if(f==1)
        {
            printf("It is not a prime word.\n");
        }
    }

    return 0;
}

