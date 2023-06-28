#include <bits/stdc++.h>
using namespace std;
#define ll long long

long long S;
bool a[100000000];
vector <long long> prime;
vector <long long> twin;
void func()
{
    long long i, j;
    memset(a, true, sizeof(a));
    for(i=3;i*i<=100000000;i++)
    {
        if(a[i]==true)
        {
            for(j=i*i;j<=100000000;j=j+i)
            {
                a[j] = false;
            }
        }
    }
    prime.push_back(2);
    for(i=3;i<=100000000;i=i+2)
    {
        if(a[i]==true)
        {
            prime.push_back(i);
        }
    }
    for(i=0;i<=prime.size();i++)
    {
        if((prime[i]+2)==(prime[i+1]))
        {
            twin.push_back(prime[i]);
        }
    }
}

int main()
{
    func();
    while((scanf("%lld", &S)!=EOF))
    {
        S--;
        printf("(%lld, %lld)\n", twin[S], twin[S]+2);
    }
    return 0;
}
