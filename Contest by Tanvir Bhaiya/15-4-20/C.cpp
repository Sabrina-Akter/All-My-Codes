#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b, c, d, A, B;
    cin >> n;
    a = n%10;
    b = (n/10)%10;
    c = ((n/10)/10)%10;
    d = (((n/10)/10)/10)%10;
    A = (d*10)+c;
    B = (b*10)+a;

    if((B>0 && B<13) && (A>0 && A<13))
    {
        cout << "AMBIGUOUS\n";
    }
    else if(A>0 && A<13)
    {
        cout << "MMYY\n";
    }
    else if(B>0 && B<13)
    {
        cout << "YYMM\n";
    }
    else
    {
        cout << "NA\n";
    }

    return 0;
}
