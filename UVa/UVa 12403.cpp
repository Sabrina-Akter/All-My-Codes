#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,i;
    long long n, sum=0;
    char A[100];
    scanf("%d", &t);
    for(i=0;i<t;i++)
    {
        scanf("%s", A);
        if((strcmp(A, "report")==0))
        {
            printf("%lld\n", sum);
        }
        else
        {
            scanf("%lld", &n);
            sum = sum + n;
        }
    }
    return 0;
}
