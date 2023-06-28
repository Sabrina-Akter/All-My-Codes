#include <bits/stdc++.h>
using namespace std;

int main()
{
    char A[100000], B[100000];
    cin >> A;
    int i, n=0, l = strlen(A);
    for(i=0;i<l;i++)
    {
        if(A[i]!='A' && A[i]!='E' && A[i]!='I' && A[i]!='O' && A[i]!='U' && A[i]!='Y' && A[i]!='a' && A[i]!='e' && A[i]!='i' && A[i]!='o' && A[i]!='u' && A[i]!='y')
        {
            B[n]='.';
            n++;
            B[n]=tolower(A[i]);
            n++;
        }
    }
    B[n]='\0';
    cout << B << endl;
    return 0;
}
