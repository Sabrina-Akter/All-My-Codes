#include <bits/stdc++.h>
using namespace std;

int findCenter(vector<vector<int>>& edges) {
      int i, A[4], ans;
      map <int, int> m;
      A[0] = edges[0][0], A[1] = edges[0][1], A[2] = edges[1][0], A[3] = edges[1][1];
      for(i=0;i<4;i++)
      {
        m[A[i]]++;
        if(m[A[i]]==2)
        {
            ans = A[i];
        }
      }
      return ans;
    }

int main()
{
    vector<vector<int>> edges = {{1,2},{5,1},{1,3},{1,4}};
    findCenter(edges);
    return 0;
}