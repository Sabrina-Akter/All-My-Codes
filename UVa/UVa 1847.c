#include <stdio.h>
int main()
{
    int t1,t2,t3;

    scanf("%d%d%d", &t1, &t2, &t3);

    //1
    if((t2<t1) && (t3>=t2))
    {
        printf(":)\n");
    }
    //2
    else if((t2>t1) && (t3<=t2))
    {
        printf(":(\n");
    }
    //3
    else if((t2>t1) && (t3>t2) && (t3-t2)<(t2-t1))
    {
        printf(":(\n");
    }
    //4
    else if((t2>t1) && (t3>t2) && (t3-t2)>=(t2-t1))
    {
        printf(":)\n");
    }
    //5
    else if((t1>t2) && (t2>t3) && (t1-t2)>(t2-t3))
    {
        printf(":)\n");
    }
    //6
    else if((t1>t2) && (t2>t3) && (t1-t2)<=(t2-t3))
    {
        printf(":(\n");
    }
    //7
    else if((t1-t2==0) && (t3>t2))
    {
        printf(":)\n");
    }
    //8
    else if((t1-t2==0) && (t3<t2))
    {
        printf(":(\n");
    }

    return 0;
}
