#include <bits/stdc++.h>
using namespace std;

int romanToInt(string s) {
      int i, n = s.size(), sum=0;
      char next;
      map <char, int> m;
      m['I'] = 1, m['V'] = 5, m['X'] = 10, m['L'] = 50, m['C'] = 100, m['D'] = 500, m['M'] = 1000;
      for(i=0;i<n;i++)
      {
        if(i+1==n)
        {
            next = '*';
        }
        else
        {
            next = s[i+1];
        }
        //1
        if(s[i]=='I' && next=='V')
        {
            sum+=4;
            i++;
        }
        //2
        else if(s[i]=='I' && next=='X')
        {
            sum+=9;
            i++;
        }
        //3
        else if(s[i]=='X' && next=='L')
        {
            sum+=40;
            i++;
        }
        //4
        else if(s[i]=='X' && next=='C')
        {
            sum+=90;
            i++;
        }
        //5
        else if(s[i]=='C' && next=='D')
        {
            sum+=400;
            i++;
        }
        //6
        else if(s[i]=='C' && next=='M')
        {
            sum+=900;
            i++;
        }
        //7
        else
        {
            sum+=m[s[i]];
        }
      }
      cout << sum << endl;
      return sum;  
    }

int main()
{
    string  s = "MMMCMXCIX";
    romanToInt(s);
    return 0;
}