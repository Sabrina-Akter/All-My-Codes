#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back
#define ff first
#define ss second
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define ms(x) memset(x, 0, sizeof x)

const int MOD = 1000000007;
const char nl = '\n';

int X[]={+0,+0,+1,-1,-1,+1,-1,+1};   // King's Moves
int Y[]={-1,+1,+0,+0,+1,+1,-1,-1};  // King's Moves

int KX[]={-2,-2,-1,-1,1,1,2,2};  // Knight's Move
int KY[]={-1,1,-2,2,-2,2,-1,1}; // Knight's Move

bitset <1000000000> bs;
vector <long long> primes;

void sieve(long long upper_bound)
{
    bs.set();
    bs[0]=bs[1]=0;
    primes.push_back(2);
    for(long long i = 3; i<=upper_bound+1;i+=2)
    {
        if(bs[i])
        {
            for(long long j=i*i; j<=upper_bound+1;j+=i)
            {
                bs[j]=0;
            }
            primes.push_back((long long)i);
        }
    }
}

int main()
{
    fastt;
    sieve(1000000000);
    for(long long i=0; i<primes.size(); i++)
    {
        cout << primes[i] << nl;
    }
    return 0;
}
