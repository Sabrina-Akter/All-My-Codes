#include <bits/stdc++.h>
using namespace std;

int chalkReplacer(vector<int>& chalk, int k) 
{
    long long sum = 0;
    for(int i = 0; i < chalk.size(); i++)
    {
        sum += chalk[i];
    }
    int div = k / sum;
    k = k - (sum * div);
    for(int i = 0; i < chalk.size(); i++)
    {
        if(k < chalk[i]) return i;
        else k -= chalk[i];
    }
    return 0;
}

int main()
{
    

    return 0;
}