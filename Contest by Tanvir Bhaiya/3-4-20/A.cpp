#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, A, B, X;
    cin >> N >> A >> B;
    X = N*A;
    if(X<B)
    {
        cout << X << endl;
    }
    else if(B<X)
    {
        cout << B << endl;
    }
    else if(X==B)
    {
        cout << B << endl;
    }
    return 0;
}
