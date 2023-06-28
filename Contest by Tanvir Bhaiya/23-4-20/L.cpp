#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s[1000000];
    int t, i, l, n, m, f=0,x;
    cin >> t;
    while(t--)
    {
       x = 0;
       f = 0;
       cin >> s;
       l = strlen(s);
       n = l/2;
       m = l-1;
       for(i=0;i<l;i++)
       {
           if(x==0 && ((s[i]== '(') && (s[m]== ')')))
           {
                f++;
                x = 1;
           }
           else if(x==1 && ((s[i]== '(') && (s[m]== ')')))
           {
                f++;
           }
           else if(x==2 && ((s[i]== '(') && (s[m]== ')')))
           {
                f++;
           }
           else if(x==3 && ((s[i]== '(') && (s[m]== ')')))
           {
                f++;
           }
           else if(x==0 && ((s[i]== '[') && (s[m]== ']')))
           {
                f++;
                x = 2;
           }
           else if(x==2 && ((s[i]== '[') && (s[m]== ']')))
           {
                f++;
           }
           else if(x==3 && ((s[i]== '[') && (s[m]== ']')))
           {
                f++;
           }
           else if(x==0 && ((s[i]== '{') && (s[m]== '}')))
           {
                f++;
                x = 3;
           }
           else if(x==3 && ((s[i]== '{') && (s[m]== '}')))
           {
                f++;
                x = 3;
           }
            m--;
       }
       if(f==n)
       {
           cout << "YES\n";
       }
       else
       {
           cout << "NO\n";
       }
    }
    return 0;
}
