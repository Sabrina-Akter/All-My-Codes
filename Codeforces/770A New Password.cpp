#include <bits/stdc++.h>
using namespace std;

int main()
{
    char c[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '\0'};
    int n, k, i, x=0;
    cin >> n >> k;
    while(1)
    {
        for(i=0;i<k;i++)
        {
            if(x==n)
            {
                break;
            }
            else
            {
                cout << c[i];
            }
            x++;
        }
        if(x==n)
        {
            break;
        }
    }
    cout << endl;
    return 0;
}
