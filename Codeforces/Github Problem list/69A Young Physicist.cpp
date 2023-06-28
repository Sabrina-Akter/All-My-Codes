#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, a, b, c, sum_a=0, sum_b=0, sum_c=0, sum = 0;
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> a >> b >> c;
        sum_a = sum_a + a;
        sum_b = sum_b + b;
        sum_c = sum_c + c;
    }

    if(sum_a==0 && sum_b==0 && sum_c==0)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
    return 0;
}
