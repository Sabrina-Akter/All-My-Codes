#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1 = "abcdefghijklmnopqrstuvwxyz";
    string s2 = "zyxwvutsrqponmlkjihgfedcba";
    string s4;
    char ch;
    int l;
    vector <char> s3;
    s3.push_back('a');
    cin >> s4;
    for(l=0;l<s4.size();l++)
    {
        ch = s4[l];
        s3.push_back(ch);
    }
    int n1 = s1.size(), n2 = s2.size(), n3 = s3.size();
    int a, b, c, x, y, z, i, j, k, sum=0;

    for(i=0;i<n3-1;i++)
    {
        for(j=0;j<n1;j++)
        {
            if(s3[i]==s1[j])
            {
                a = j+1;
                cout << "a = " << a << endl;
            }
            if(s3[i+1]==s1[j])
            {
                b = j+1;
                cout << "b = " << b << endl;
            }
        }
        for(k=0;k<n2;k++)
        {
            if(s3[i+1]==s2[k])
            {
                c = k;
                cout << "c = " << c << endl;
            }
        }
        if(a>b)
        {
            x = a-b;
            cout << "x = " << x << endl;
        }
        else if(b>a)
        {
            x = b-a;
            cout << "x = " << x << endl;
        }
        if(a>c)
        {
            y = a-c;
            cout << "y = " << y << endl;
        }
        else if(c>a)
        {
            y = c-a;
            cout << "y = " << y << endl;
        }
        else if(c==a)
        {
            y = c+a;
            cout << "y = " << y << endl;
        }

        if(x>=y)
        {
            z = y;
            cout << "z = " << z << endl;
        }
        else if(y>x)
        {
            z = x;
            cout << "z = " << z << endl;
        }
        sum = sum + z;
        cout << "sum = " << sum << "\n\n" << endl;
    }
    cout << sum << endl;
    return 0;
}
