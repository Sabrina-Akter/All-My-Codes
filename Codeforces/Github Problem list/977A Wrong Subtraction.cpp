#include <iostream>
using namespace std;

int main()
{
    long long n;
    int k, i;
    cin >> n >> k;
    for(i=0;i<k;i++)
    {
        if(n%10==0)
        {
            n = n/10;
        }
        else
        {
            n = n - 1;
        }
    }
    cout << n << endl;
    return 0;
}
