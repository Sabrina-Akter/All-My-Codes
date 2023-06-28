#include <bits/stdc++.h>
using namespace std;

int main()
{
    string st;
    vector <int> c;

    double n, S, carry=0, x;
    int mul, i;
    cin >> st >> n;
    n = (n*10000)/100;
    S = st.size();
    for(i=S-1;i>=0;i--)
    {
        if(st[i]=='0')
        {
            x = 0;
        }
        else if(st[i]=='1')
        {
            x = 1;
        }
        else if(st[i]=='2')
        {
            x = 2;
        }
        else if(st[i]=='3')
        {
            x = 3;
        }
        else if(st[i]=='4')
        {
            x = 4;
        }
        else if(st[i]=='5')
        {
            x = 5;
        }
        else if(st[i]=='6')
        {
            x = 6;
        }
        else if(st[i]=='7')
        {
            x = 7;
        }
        else if(st[i]=='8')
        {
            x = 8;
        }
        else if(st[i]=='9')
        {
            x = 9;
        }
        if(S==1)
        {
            c.push_back((x*n)/100);
            continue;
        }
        mul = (x*n)+carry;
        if(S==2 && i==0)
        {
            c.push_back((mul/10));
            continue;
        }
        if(i==0)
        {
            mul = mul;
            c.push_back(mul);
            continue;
        }
        if(mul>9)
        {
        if((S==2 && i==1) || (S>2 && i==S-2) || (S>2 && i==S-1))
        {
        }
        else
        {
            c.push_back(mul%10);
        }
            carry = mul/10;
        }
        else
        {
        if((S==2 && i==1) || (S>2 && i==S-1) || (S>2 && i==S-2))
        {
        }
        else
        {
            c.push_back(mul);
        }
            carry = 0;
        }
    }
    for(i=(c.size()-1);i>=0;i--)
    {
            cout << c[i];
    }
}
