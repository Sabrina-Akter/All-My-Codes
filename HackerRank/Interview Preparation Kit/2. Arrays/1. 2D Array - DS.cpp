#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long i, j, sum, ar[6][6];
    vector <long long> v;
    for(i=0;i<6;i++)
    {
        for(j=0;j<6;j++)
        {
            cin >> ar[i][j];
        }
    }
    for(i=0;i<6;i++)
    {
        for(j=0;j<6;j++)
        {
            if(i==0 || j==0 || i==5 || j==5)
            {
                continue;
            }
            else
            {
                sum = (ar[i-1][j-1])+(ar[i-1][j])+(ar[i-1][j+1])+(ar[i][j])+(ar[i+1][j-1])+(ar[i+1][j])+(ar[i+1][j+1]);
                v.push_back(sum);
            }
        }
    }
    sort(v.begin(), v.end());
    cout << v[v.size()-1] << endl;
    return 0;
}
