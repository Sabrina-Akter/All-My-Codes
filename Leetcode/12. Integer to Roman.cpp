#include <bits/stdc++.h>
using namespace std;

string intToRoman(int num) {
        map <int, string> m;
        m[1]="I", m[5]="V", m[10]="X", m[50]="L", m[100]="C", m[500]="D", m[1000]="M";
        m[4]="IV", m[9]="IX", m[40]="XL", m[90]="XC", m[400]="CD", m[900]="CM";
        int ar[13] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        int i, j, x, n;
        string ans;
        while(1)
        {
            if(num==0)
            {
                break;
            }
            for(i=0;i<13;i++)
            {
                if(ar[i]<=num)
                {
                    n = ar[i];
                    x = num/ar[i];
                    num = num - (x*ar[i]);
                    break;
                }
            }
            for(i=0;i<x;i++)
            {
                ans+=m[n];
            }
        }
        return ans;
    }

int main()
{
    int num;
    cin >> num;
    intToRoman(num);

    return 0;
}