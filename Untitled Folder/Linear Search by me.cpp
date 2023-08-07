#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, ARRAY[9] = {10, 50, 30, 70, 80, 60, 20, 90, 40}, flag=0;

    cout << "Enter an element: ";
    cin >> n;

    for(i=0;i<9;i++)
    {
        if(n==ARRAY[i])
        {
            cout << "\nThe element " << n << " is present at " << i << " index.\n";
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
            cout << "\nThe element " << n << " is not present in the array.\n";
    }

    return 0;
}
