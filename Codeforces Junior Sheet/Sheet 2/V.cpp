#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, j=0;
    cin >> n;
    while(n--)
    {
        for(i=1;i<=3;i++)
        {
            j++;
            cout << j << " ";
        }
        cout << "PUM\n";
        j = j+1;
    }
    return 0;
}
