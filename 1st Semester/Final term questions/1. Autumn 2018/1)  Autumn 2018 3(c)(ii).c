#include<stdio.h>

int q=5;

void func()
{
    int a = 10;
    static int s = 10;
    a = a + q;
    s = s + q;
    printf("a=%d, s=%d\n", a, s);
}

int main()
{
    func();
    q++;
    func();
    return 0;
}
/*s er value 15 roye jaabe.
q++ hoye jabar por q er value hobe 6.
s = s + q
  = 15 + 6 = 21*/
