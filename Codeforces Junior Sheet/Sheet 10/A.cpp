/*#include <bits/stdc++.h>
using namespace std;

struct ar
{
    int a, b;
};
int main()
{
    int n, i, flag=0;
    cin >> n;
    struct ar A[n];
    int N[n];
    for(i=0;i<n;i++)
    {
        cin >> A[i].a >> A[i].b;
        N[i] = A[i].a;
    }
    sort(N, N+n);
    for(i=0;i<n;i++)
    {
        A[i].a = N[i];
    }
    for(i=0;i<n-1;i++)
    {
        if(A[i].b < A[i+1].b)
        {
            flag = 1;
            break;
        }
    }
    if(flag==0)
    {
        cout << "Happy Alex" << endl;
    }
    else
    {
        cout << "Poor Alex" << endl;
    }
    return 0;
}*/
#include <iostream>
using namespace std;
int n, a, b;
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        if (a != b) {
            cout << "Happy Alex";
            return 0;
        }
    }
    cout << "Poor Alex";
}
