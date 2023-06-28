#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;
    if(r1>l2 && r2>l1)
    {
        if(l2>=l1)
        {
            cout << l2;
        }
        else
        {
            cout << l1;
        }
        cout << " ";
        if(r1<=r2)
        {
            cout << r1;
        }
        else
        {
            cout << r2;
        }
    }
    else if(r2>l1 && r1>l2)
    {
        if(l2>=l1)
        {
            cout << l2;
        }
        else
        {
            cout << l1;
        }
        cout << " ";
        if(r1<=r2)
        {
            cout << r1;
        }
        else
        {
            cout << r2;
        }
    }
    else if(l1==l2 && r1==r2)
    {
        cout << l1 << " " << r1;
    }
    else if(r1==l2)
    {
        cout << r1 << " " << r1;
    }
    else if(l1==r2)
    {
        cout << l1 << " " << l1;
    }
    else
    {
        cout << "-1" << endl;
    }
    return 0;
}
