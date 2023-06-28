#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    string s1, s2, t;
    cin >> s1 >> s2;
    int l1 = s1.size()-1, l2 = s2.size()-1, i, j, dig1=0, num, dig2, k=-1;
    if(l2>l1)
    {
        t = s1;
        s1 = s2;
        s2 = t;
    }
    l1 = s1.size()-1, l2 = s2.size()-1;
    vector <int> v1, v2, v3;
    for(i=l1;i>=0;i--)
    {
        v1.push_back(s1[i]-'0');
    }
    for(i=l2;i>=0;i--)
    {
        v2.push_back(s2[i]-'0');
    }
    for(i=0;i<=l2;i++)
    {
        k=i;
        for(j=0;j<=l1;j++)
        {
            if(i==0)
            {
                num = (v2[i]*v1[j]) + dig1;
                if(j==l1)
                {
                    if(num<10)
                    {
                        v3.push_back(num);
                    }
                    else
                    {
                        v3.push_back(num%10);
                        v3.push_back((num/10)%10);
                    }

                    dig1 = 0;
                    cout << "1.2: dig1 = " << dig1 << " num = " << num << " dig2 = " << dig2 << endl;
                    continue;
                }
                dig2 = num%10;
                num = num/10;
                dig1= num%10;
                cout << "1.1: dig1 = " << dig1 << " num = " << num << " dig2 = " << dig2 << endl;
                v3.push_back(dig2);
            }
            else if(i!=0)
            {
                num = (v2[i]*v1[j]) + dig1 + v3[k];
                cout << "v3.size()=" << v3.size() << " and k=" << k << endl;
                cout << "num = " << num << endl;
                if(j==l1)
                {
                    if(num<10)
                    {
                        v3.push_back(num);
                        cout << "2.2: dig1 = " << dig1 << " num = " << num << " dig2 = " << dig2 << endl;
                    }
                    else
                    {
                        v3.push_back(num%10);
                        cout << "2.1: v3[" << k << "] = " << v3[k] << endl;
                        k++;
                        v3.push_back((num/10)%10);
                        cout << "2.1: v3[" << k << "] = " << v3[k] << endl;
                    }

                    dig1 = 0;
                    continue;
                }
                dig2 = num%10;
                num = num/10;
                dig1 = num%10;
                v3[k] = dig2;
                cout << "2.1: dig1 = " << dig1 << " dig2 = " << dig2 << endl;
                cout << "2.1: v3[" << k << "] = " << dig2 << endl;
                k++;
            }
        }
        cout << endl;
    }
    for(i=v3.size()-1;i>=0;i--)
    {
        cout << v3[i];
    }
    return 0;
}
