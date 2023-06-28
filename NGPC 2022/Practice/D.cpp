#include <bits/stdc++.h>
using namespace std;

const long long N = 7368790;
bool flag[N];
vector<long long> prime;

void sieve()
{
    memset(flag, true, sizeof(flag));
    flag[0] = flag[1] = false;
    for (long long i = 2; i < N; i++)
    {
        if (flag[i])
        {
            prime.push_back(i);
            for (long long j = 2 * i; j < N; j += i)
                flag[j] = false;
        }
    }
}

int main()
{
    sieve();
    long long n;
    cin >> n;
    cout << prime[n-1] << endl;
    return 0;
}