#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,x,y,sum=0;
    vector <int> t;
    cin >> n;
    int N[n];
    for(i=0;i<n;i++)
    {
        cin >> N[i];
    }
    for(i=1;i<=100;i++)
    {
        sum = 0;
        for(j=0;j<n;j++)
        {
            x = (N[j]-i);
            y = x*x;
            if(y<0)
            {
                y = y * (-1);
            }
            sum = sum + y;
        }
        t.push_back(sum);
    }
    sort(t.begin(),t.end());
    cout << t[0] << endl;
    return 0;
}
