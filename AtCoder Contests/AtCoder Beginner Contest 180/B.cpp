#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long  n, x, sum1 = 0;
    long double  sum2 = 0;
    cin >> n;
    long long arr[n];
    for(int i=0; i<n;i++)
    {
        cin >> x;
        arr[i] = abs(x);
        sum1 = sum1 + abs(x);
        sum2 = sum2 + (abs(x)*abs(x));
    }
    cout << sum1 << "\n" << fixed << setprecision(15) << sqrt(sum2) << "\n" << *max_element(arr+0, arr+n) << endl;
    return 0;
}
