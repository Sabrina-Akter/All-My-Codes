#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s, word="";
    vector <string> v;
    long long i, flag = 0;
    cin >> s;
    s = s+'&';
    for(i=0;i<s.size();i++)
    {
        //1
        if(s[i]=='=' && s[i-1]=='e' && s[i-2]=='m' && s[i-3]=='a' && s[i-4]=='n' && s[i-5]=='r' && s[i-6]=='e' && s[i-7]=='s' && s[i-8]=='u')
        {
            flag = 1;
            i++;
        }
        if(flag==1)
        {
            if(s[i]=='&')
            {
                v.push_back(word);
                flag = 0;
                word = "";
            }
            else if(flag==1)
            {
                word = word + s[i];
            }
        }
        //2
        if(s[i]=='=' && s[i-1]=='d' && s[i-2]=='w' && s[i-3]=='p')
        {
            flag = 2;
            i++;
        }
        if(flag==2)
        {
            if(s[i]=='&')
            {
                v.push_back(word);
                flag = 0;
                word = "";
            }
            else if(flag==2)
            {
                word = word + s[i];
            }
        }
        //3
        if(s[i]=='=' && s[i-1]=='e' && s[i-2]=='l' && s[i-3]=='i' && s[i-4]=='f' && s[i-5]=='o' && s[i-6]=='r' && s[i-7]=='p')
        {
            flag = 3;
            i++;
        }
        if(flag==3)
        {
            if(s[i]=='&')
            {
                v.push_back(word);
                flag = 0;
                word = "";
            }
            else if(flag==3)
            {
                word = word + s[i];
            }
        }
        //4
        if(s[i]=='=' && s[i-1]=='e' && s[i-2]=='l' && s[i-3]=='o' && s[i-4]=='r')
        {
            flag = 4;
            i++;
        }
        if(flag==4)
        {
            if(s[i]=='&')
            {
                v.push_back(word);
                flag = 0;
                word = "";
            }
            else if(flag==4)
            {
                word = word + s[i];
            }
        }
        //5
        if(s[i]=='=' && s[i-1]=='y' && s[i-2]=='e' && s[i-3]=='k')
        {
            flag = 5;
            i++;
        }
        if(flag==5)
        {
            if(s[i]=='&')
            {
                v.push_back(word);
                flag = 0;
                word = "";
            }
            else if(flag==5)
            {
                word = word + s[i];
            }
        }
    }
    cout << "username: " << v[0] << endl;
    cout << "pwd: " << v[1] << endl;
    cout << "profile: " << v[2] << endl;
    cout << "role: " << v[3] << endl;
    cout << "key: " << v[4] << endl;
    return 0;
}
