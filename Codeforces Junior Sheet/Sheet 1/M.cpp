#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, Min, Max;
    cin >> a >> b >> c;
    Max = max((max(a,b)) , (max(b,c)));
    Min = min((min(a,b)) , (min(b,c)));
    cout << Min << " " << Max << endl;
    return 0;
}
