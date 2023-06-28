#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        if(n>10)
        {
            cout << "Avenger " << n << " Sucks\n";
        }
        else
        {
            cout << "Avenger " << n << " Rocks\n";
        }
    }
    return 0;
}
