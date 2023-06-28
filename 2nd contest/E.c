#include <stdio.h>
int main()
{
    int h1,m1,h2,m2,h3,m3;
    while(1)
    {
        scanf("%d%d%d%d", &h1, &m1, &h2, &m2);
        printf("%d %d %d %d\n", h1, m1, h2, m2);
        if(h1==0 && m1==0 && h2==0 && m2==0)
        {
            break;
        }
        if(h2>=h1)
        {
            if(m2>=m1)
            {
                h3 = (h2 - h1)*60;
                m3 = m2 - m1;
                printf("%d\n", h3+m3);
            }
            else if(m2<m1)
            {
                h3 = ((24-h1)+ h1)*60;
                m3 = 60 - (m2 - m1);
                printf("%d\n", h3+m3);
            }
        }
    }
    return 0;
}
