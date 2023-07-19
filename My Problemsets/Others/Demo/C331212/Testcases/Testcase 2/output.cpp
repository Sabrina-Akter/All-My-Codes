#include <bits/stdc++.h>
using namespace std;
int main() {
    freopen("Input 2.txt", "r", stdin);
    freopen("Output 2.txt", "w", stdout);
    long long t;
    cin >> t;
    while(t--)
    {
        long long n, i, x, odd=0, even=0;
        cin >> n;
        for(i=0;i<n;i++)
        {
            cin >> x;
            if(x%2==0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        cout << odd << " " << even << endl;
    }
    fclose(stdin);
    fclose(stdout);
    return 0;
}