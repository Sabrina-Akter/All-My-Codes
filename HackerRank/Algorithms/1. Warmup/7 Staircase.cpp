#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, j, k;
    cin >> n;
    int a=n, b=0;
    for(i=0;i<n;i++)
    {
        a--;
        b++;
        for(j=0;j<a;j++)
        {
            cout << " ";
        }
        for(k=0;k<b;k++)
        {
            cout << "#";
        }
        cout << "\n";
    }
    return 0;
}
