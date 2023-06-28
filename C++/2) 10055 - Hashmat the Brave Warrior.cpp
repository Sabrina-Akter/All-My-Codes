#include<bits/stdc++.h>

int main()
{
    long long int a,b,o;
    while(scanf("%lld%lld", &a, &b)==2){
            if(a>b)
            {
                o = a-b;
            }
            else
            {
                o = b-a;
            }
            printf("%lld\n", o);
    }
    return 0;
}
