#include <bits/stdc++.h>
using namespace std;

int main()
{
  int a, b, f=0, n=0, i;
  string s;
  cin >> a >> b >> s;
  if(s[a]=='-')
  {
      f=1;
  }
  for(i=0;i<s.size();i++)
  {
      if(s[i]=='-')
      {
          n++;
      }
  }
  if(f==1 && n==1)
  {
      cout << "Yes";
  }
  else
  {
      cout << "No";
  }
}
