#include <bits/stdc++.h>
using namespace std;

int countPrimes(int n)
{
    int i, j, cnt = 0;
    vector<int> prime(n+10);
    for (int i = 2; i < n; i++)
    {
        if (prime[i] == 0)
        {
            cnt++;
            for (j = i * 2; j < n; j += i)
            {
                prime[j] = 1; 
            }
        }
    }
    cout << cnt << endl;
    return cnt;
}

int main()
{
    int n = 3;
    countPrimes(n);
    return 0;
}