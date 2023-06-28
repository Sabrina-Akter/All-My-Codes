#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, N[5][5], x, y;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            cin >> N[i][j];
            if(N[i][j]==1)
            {
                x = abs(i-2);
                y = abs(j-2);
            }
        }
    }
    cout << x+y << endl;
    return 0;
}
