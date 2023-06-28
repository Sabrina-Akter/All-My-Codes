#include <bits/stdc++.h>
using namespace std;

int main()
{
    double t, n, sum=0, result;
    cin >> t;
    while(t--)
    {
        cin >> n;
        sum = sum + (1/n);
    }
    result = 1/sum;
    cout << result << endl;
    return 0;
}
