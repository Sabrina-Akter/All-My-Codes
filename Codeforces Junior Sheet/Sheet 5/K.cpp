#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, x, i, y;
    cin >> n >> x;
    x = (x%n);
    vector <long long> A;
    for(i=0;i<n;i++)
    {
       cin >> y;
       A.push_back(y);
    }
    rotate(A.begin(), A.begin()+A.size()-x, A.end());
    for(i=0;i<n;i++)
    {
       cout << A[i] << " ";
    }
    return 0;
}

