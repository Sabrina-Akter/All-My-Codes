#include <bits/stdc++.h>
using namespace std;

long long coloredCells(int n) {
        long long four=-4, i, sum=0;
        for(i=1;i<=n;i++)
        {
            four+=4;
            sum+=four;
        }
        cout << sum+1 << endl;
        return sum+1;
    }

int main()
{
    int n=5;
    coloredCells(n);

    return 0;
}