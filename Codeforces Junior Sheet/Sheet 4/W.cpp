#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1="PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
    long long n1 = s1.size();
    string s2="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    long long n2 = s2.size();
    string s3;
    long long i, j, n;
    cin >> n;
    cin >> s3;
    long long n3 = s3.size();


    if(n==1)
    {
        for(i=0;i<n3;i++)
        {
            for(j=0;j<n2;j++)
            {
                if(s3[i]==s2[j])
                {
                    cout << s1[j];
                }
            }
        }
    }
    if(n==2)
    {
        for(i=0;i<n3;i++)
        {
            for(j=0;j<n1;j++)
            {
                if(s3[i]==s1[j])
                {
                    cout << s2[j];
                }
            }
        }
    }
    return 0;
}
