#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define FOR(i,x,y) for(ll i=x;i<=y;i++)
#define vll vector <ll>
#define pb push_back

int main()
{
    fastt;
    ll vp, vd, t, f, c, loop=0, Dragon=0, Pr=0, hour=0,realize=0, BJ=0,Break=0;
    cin >> vp >> vd >> t >> f >> c;
    while(1)
    {
        loop++;
        if(realize==1)
        {
            Dragon = Dragon+vd;
        }
        cout << loop << ". #Realize = " << realize << endl;
        cout << loop << ". #Dragon = " << Dragon << endl;
        Pr=Pr+vp;
        if(Pr>=c)
        {
            break;
        }
        cout << loop << ". #Princess = " << Pr << endl;
        hour++;
        cout << loop << ". #Hour = " << hour << endl;
        if(hour==t)
        {
            realize=1;
        }
        cout << loop << ". ##Realize = " << realize << endl;
        cout << loop << ". ##Break = " << Break << endl;
        if(Dragon>=Pr)
        {
            BJ++;
            Dragon = 0;
            realize=0;
            hour = 0;
            Break=1;
        }
        cout << loop << ". ###BJ = " << BJ << endl;
        cout << loop << ". ###Dragon = " << Dragon << endl;
        cout << loop << ". ###Realize = " << realize << endl;
        cout << loop << ". ###Break = " << Break << endl;
        cout << loop << ". ###Hour = " << hour << endl;
        if(Break==1)
        {
            Pr = Pr + (vp*f);
            Break=0;
        }
        cout << loop << ". ####Princess = " << Pr << endl;
        cout << loop << ". ####Break = " << Break << endl;
    }
    cout << "BJ = " << BJ << endl;
    return 0;
}
