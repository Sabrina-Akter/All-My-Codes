#include <stdio.h>

int main(){
	int t,i,flag;
	long long int x,y,a,b,s,sum,c,d;
	scanf("%d", &t);
	for(i=0;i<t;i++)
    {
        scanf("%lld%lld%lld%lld",&x,&y,&a,&b);
        c = y - x;
        d = a+b;
        if(c%d==0)
        {
            s = c/d;
        }
        else
        {
            s = -1;
        }
        printf("%lld\n",s);
    }
}
