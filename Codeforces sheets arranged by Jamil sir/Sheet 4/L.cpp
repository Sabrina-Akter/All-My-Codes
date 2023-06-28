#include <bits/stdc++.h>
using namespace std;

int main()
{
  long long n, k, i, j;
  cin >> n >> k;
  string N;
  cin >> N;
  char C;
  vector <char> s;
  for(i=0;i<n;i++)
  {
      C = N[i];
      s.push_back(C);
  }
  for(i=0;i<k;i++)
  {
      string S;
      long long a, b;
      char c;
      cin >> S;
      if(S=="substr")
      {
          cin >> a >> b;
          for(j=a-1;j<b;j++)
          {
              cout << s[j];
          }
          cout << endl;
      }
      if(S=="sort")
      {
          cin >> a >> b;
          sort(s.begin()+(a-1), s.begin()+(b));
      }
      if(S=="pop_back")
      {
          s.pop_back();
      }
      if(S=="back")
      {
          cout << s[s.size()-1] << endl;
      }
      if(S=="reverse")
      {
          /*cin >> a >> b;
          if(a>b)
          {
              long long x = a;
              a = b;
              b = x;
              reverse(s.begin()+(a-1), s.begin()+(b));
          }
          else if(a!=b)
          {
              reverse(s.begin()+(a-1), s.begin()+(b));
          }*/
      }
      if(S=="front")
      {
          cout << s[0] << endl;
      }
      if(S=="push_back")
      {
          cin >> c;
          s.push_back(c);
      }
      if(S=="print")
      {
          cin >> a;
          cout << s[a] << endl;
      }
  }
  return 0;
}
