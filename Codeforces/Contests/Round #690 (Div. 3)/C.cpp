#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t, n, i, a, b, x, f;
    long long ar[47] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,189,289,389,489,589,689,789,1789,2789,3789,4789,5789,6789,16789,26789,36789,46789,56789,156789,256789,356789,456789,1456789,2456789,3456789,13456789,23456789,123456789};
    cin >> t;
    while(t--)
    {
        f=0;
        cin >> n;
        if(n<10)
        {
            cout << n << endl;
        }
        else if(n>9 && n <=17)
        {
            a = n-9;
            b = n-a;
            cout << a << b << endl;
        }
        else if(n>=46)
        {
            cout << "-1" << endl;
        }
        else
        {
            cout << ar[n] << endl;
        }
    }
    return 0;
}
