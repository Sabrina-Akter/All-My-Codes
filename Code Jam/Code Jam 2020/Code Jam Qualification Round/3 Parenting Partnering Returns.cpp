#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t,x=0,i;
    cin >> t;
    while(t--)
    {
        x++;
        long long n, a, b, c, f=0;
        vector <char> ch;
        cin >> n;
        for(i=0;i<n;i++)
        {
            if(i!=0)
            {
                c = b;
                cin >> a >> b;
                if((c<a) && (f==0))
                {
                    ch.push_back('C');
                    cout << 2 << endl;
                    f = 1;
                }
                else if((c>=a) && (f==1))
                {
                    ch.push_back('J');
                    cout << 3 << endl;
                    f = 1;
                }
                else if((c<a) && (f==1))
                {
                    ch.push_back('C');
                    cout << 4 << endl;
                    f = 0;
                }
                else if((c>=a) && (f==0))
                {
                    ch.push_back('J');
                    cout << 5 << endl;
                    f = 0;
                }
            }
            else if(i==0)
            {
                cin >> a >> b;
                cout << 1 << endl;
                ch.push_back('C');
            }
        }
        cout << "Case #" << x << ": ";
        for(i=0;i<ch.size();i++)
        {
            cout << ch[i];
        }
        cout << "\n";
        ch.clear();
    }
}
