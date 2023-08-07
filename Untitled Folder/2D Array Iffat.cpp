#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, i, j, x = -1;
  cin >> n;
  int ar[n][n];

  for(i=0;i<n;i++)
  {
      x++;
      for(j=0;j<n;j++)
      {
          if(x==j)
          {
              ar[i][j] = 1;
          }
          else
          {
              ar[i][j] = 0;
          }
      }
  }
  for(i=0;i<n;i++)
  {
      for(j=0;j<n;j++)
      {
          cout << ar[i][j] << " ";
      }
      cout << endl;
  }

  return 0;
}
