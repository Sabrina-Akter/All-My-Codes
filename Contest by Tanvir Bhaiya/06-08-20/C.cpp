#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll t, n, x, sum;
void show()
{
    cin >> t;
    while(t--)
    {
        sum = 0;
        cin >> n;
        while(n--)
        {
            cin >> x;
            if(x==2)
            {
                sum++;
            }
        }
        cout << (sum*(sum-1))/2 << endl;
    }
}

int main()
{
    show();
    return 0;
}
