#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i;
    cin >> n;
    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            cout << "I hate ";
        }
        else
        {
            cout << "I love ";
        }
        if(i!=n)
        {
            cout << "that ";
        }
        else
        {
            cout << "it";
        }
    }
    return 0;
}
