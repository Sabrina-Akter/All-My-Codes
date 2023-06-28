#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        char CH[] = {'1','2','3','4','5','6','7','8','9'};
        string s;
        cin >> s;
        int f=0;
        for(int i=0;i<9;i++)
        {
            string word = "";
            for(int j=1;j<=4;j++)
            {
                word = word + CH[i];
                f = f + j;
                if(word==s)
                {
                    cout << f << endl;
                    break;
                }
            }
        }
    }
    return 0;
}
