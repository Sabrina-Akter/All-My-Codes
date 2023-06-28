#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 3;
    for (int k = n; k >= 1; k--)
    {
        for (int i = n; i >= 1; i--)
        {
            for (int j = k; j >= 1; j--)
            {
                cout << i << " ";
            }
        }
        cout << "$";
    }
    return 0;
}