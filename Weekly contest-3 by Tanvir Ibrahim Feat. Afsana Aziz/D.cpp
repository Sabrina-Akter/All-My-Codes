#include <bits/stdc++.h>
using namespace std;

int main()
{
    char A[100000];
    cin >> A;
    long long l = strlen(A);
    long long a = count(A, A+l, 'H');
    long long b = count(A, A+l, 'Q');
    long long c = count(A, A+l, '9');
    if(a>0 || b>0 || c>0)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
    return 0;
}
