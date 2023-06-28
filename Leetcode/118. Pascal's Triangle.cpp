#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> generate(int numRows) 
{
       vector<vector<int>> v(numRows);
       v[0].push_back(1);
       int i, j;
       for(i=1;i<numRows;i++)
       {
            for(j=0;j<i+1;j++)
            {
                if(j==0 || j==i)
                {
                    v[i].push_back(1);
                }
                else
                {
                    v[i].push_back(v[i-1][j]+v[i-1][j-1]);
                }
            }
       }
       return v;
}

int main()
{
    int n;
    cin >> n;
    generate(n);
    return 0;
}