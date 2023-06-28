#include<bits/stdc++.h>
using namespace std;

int main()
{
    int b1, b2, b3, c1, c2, c3, g1, g2, g3, i, min;
    while(cin >> b1 >> g1 >> c1 >> b2 >> g2 >> c2 >> b3 >> g3 >> c3)
    {
        vector <string> v1;
        v1.push_back("BCG");
        v1.push_back("BGC");
        v1.push_back("CBG");
        v1.push_back("CGB");
        v1.push_back("GBC");
        v1.push_back("GCB");

        int ar[6] = {(b2+b3+c1+c3+g1+g2),(b2+b3+g1+g3+c1+c2),(c2+c3+b1+b3+g1+g2),(c2+c3+g1+g3+b1+b2),(g2+g3+b1+b3+c1+c2),(g2+g3+c1+c3+b1+b2)};

        vector <int> v2;
        v2.push_back(ar[0]);
        v2.push_back(ar[1]);
        v2.push_back(ar[2]);
        v2.push_back(ar[3]);
        v2.push_back(ar[4]);
        v2.push_back(ar[5]);
        sort(v2.begin(),v2.end());
        min = v2[0];
        for(i=0;i<6;i++)
        {
            if(ar[i]==min)
            {
                cout << v1[i] << " " << min << endl;
                break;
            }
        }
    }
    return 0;
}
