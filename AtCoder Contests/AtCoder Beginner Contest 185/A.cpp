#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, ar[4];
    for(i=0;i<4;i++)
    {
        cin >> ar[i];
    }
    sort(ar, ar+4);
    cout << ar[0] << endl;
    return 0;
}
