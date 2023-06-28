#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t, i;
  scanf("%d\n", &t);
  while(t--)
  {
      int x = 0;
      string s, word="";
      char ch;
      vector <string> v;
      getline(cin, s);
      for(i=s.size();i>=0;i--)
      {
          if((s[i-1]==' ' || i==0) && (x==0))
          {
              ch = toupper(s[i]);
              word = word + ch;
              reverse(word.begin(), word.end());
              v.push_back(word);
              word = "";
              x = 1;
          }
          else if(x==0)
          {
              ch = tolower(s[i]);
              word = word + ch;
          }
          else if((s[i-1]==' ' || i==0) && (x==1))
          {
              ch = toupper(s[i]);
              word = word+ ch + '.';
              v.push_back(word);
              word = "";
          }
      }
      for(i=v.size()-1;i>=0;i--)
      {
          if(i==0)
          {
              cout << v[i];
              cout << endl;
          }
          else
          {
              cout << v[i] << " ";
          }

      }
      v.clear();
  }
  return 0;
}
