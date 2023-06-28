#include <bits/stdc++.h>
using namespace std;

int main()
{
    char A[100000], B[100000];
    cin >> A;
    int m = strlen(A);
    cin >> B;
    int n = strlen(B);
    int x = count(A, A+m, 'a');

    int y = count(B, B+n, 'a');

    if(x<y)
    {
        cout << "no\n";
    }
    else
    {
        cout << "go\n";
    }

    return 0;
}
