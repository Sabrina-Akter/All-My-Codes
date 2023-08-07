#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t, i, j;
  cin >> t;
  while(t--)
  {
      string s1, s2;
      cin >> s1;
      cin >> s2;
      int l1 = s1.size(), l2 = s2.size(), x=0, i=0, j=0;
      while(1)
      {
          x++;
          if(x%2!=0)
          {
              if(i==l1)
              {
                  continue;
              }
              cout << s1[i];
              i++;
          }
          else if(x%2==0)
          {
              if(j==l2)
              {
                  continue;
              }
              cout << s2[j];
              j++;
          }
          if(i==l1 && j==l2)
          {
              cout << endl;
              break;
          }
      }

  }
  return 0;
}
