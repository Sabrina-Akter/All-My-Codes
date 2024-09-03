#include <bits/stdc++.h>
using namespace std;

int getLucky(string s, int k) 
{
    string number;
    for(int i = 0; i < s.size(); i++)
    {
        int x = s[i] - 'a' + 1;
        string temp = to_string(x);
        number += temp;
    }
    long long sum = 0, ans;
    while(k--)
    {
        for(int i = 0; i < number.size(); i++)
        {
            sum += number[i] - '0';
        }
        ans = sum;
        number = to_string(sum);
        sum = 0;
    }
    return ans;
}

int main()
{
    

    return 0;
}