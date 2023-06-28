#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x = 0, i;
    int N[] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
    cin >> n;
    for(i=0;i<14;i++)
    {
        if(n%N[i]==0)
        {
            x++;
        }
    }
    if(x==0)
    {
        cout << "NO\n";
    }
    else
    {
        cout << "YES\n";
    }
    return 0;
}
