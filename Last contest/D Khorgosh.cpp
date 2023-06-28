#include <bits/stdc++.h>
using namespace std;

int main(){
	int t,i,flag;
	long long int x,y,a,b,s;
	scanf("%d", &t);
	for(i=0;i<t;i++)
    {
        scanf("%lld%lld%lld%lld",&x,&y,&a,&b);
        {
            flag = -1;
            s=0;
            while(1)
            {
                x = x+a;
                y = y-b;
                s++;
                if(x==y)
                {
                    flag = 1;
                    break;
                }
                if(x>y)
                {
                    break;
                }
            }
            if(flag==1)
            {
                printf("%lld\n",s);
            }
            else
            {
                printf("-1\n");
            }
        }
    }
}
