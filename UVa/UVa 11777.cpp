#include <bits/stdc++.h>
using namespace std;

int main()
{
    double t,i,A,B,C,D,E,F,G,H,Min,T,c=0;
    cin >> t;
    for(i=0;i<t;i++)
    {
        c++;
        cin >> A >> B >> C >> D >> E >> F >> G;
        Min = min(min(E,F),min(F,G));
        H = (E + F + G - Min)/2;
        T = A + B + C + D + H;
        if(T>=90)
        {
            cout << "Case " << c << ": A" << endl;
        }
        else if(T>=80)
        {
            cout << "Case " << c << ": B" << endl;
        }
        else if(T>=70)
        {
            cout << "Case " << c << ": C" << endl;
        }
        else if(T>=60)
        {
            cout << "Case " << c << ": D" << endl;
        }
        else if(T<60)
        {
            cout << "Case " << c << ": F" << endl;
        }
    }
    return 0;
}
