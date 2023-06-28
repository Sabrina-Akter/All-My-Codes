#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int y, i, j, sum, a, b, c, d;
    cin >> y;
    for(i=y+1;i<10000;i++)
    {
        int N[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
        sum = 0;
        a = i%10;
        b = (i/10)%10;
        c = ((i/10)/10)%10;
        d = (((i/10)/10)/10)%10;
        N[a] = 1;
        N[b] = 1;
        N[c] = 1;
        N[d] = 1;
        for(j=0;j<=9;j++)
        {
            sum = sum + N[j];
        }
        if(sum==4)
        {
            cout << i << endl;
            break;
        }
    }

    return 0;
}
