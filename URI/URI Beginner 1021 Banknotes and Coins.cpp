#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, x, i, ar[12] = {100000, 50000, 20000, 10000, 5000, 2000, 1000, 500, 250, 100, 50, 10};
    double N, b[12] = {100.00, 50.00, 20.00, 10.00, 5.00, 2.00, 1.00, 0.50, 0.25, 0.10, 0.05, 0.01};
    cin >> N;
    N = N*1000;
    n = N;
    for(i=0;i<12;i++)
    {
        if(i==0)
        {
            cout << "NOTAS:\n";
        }
        if(i==6)
        {
            cout << "MOEDAS:\n";
        }
        x = ar[i];
        if(i<6)
        {
            cout << n/x << " nota(s) de R$ " << fixed << setprecision(2) << b[i] << endl;
        }
        else
        {
            cout << n/x << " moeda(s) de R$ " << fixed << setprecision(2) << b[i] << endl;
        }
        n = n%x;
    }
    return 0;
}
