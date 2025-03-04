#include <bits/stdc++.h>
using namespace std;

vector <int> v = {1};
bool f(int sum, int i, int n)
{
    if (i == v.size())
    {
        if (sum == n) return true;
        return false; 
    }
    else
    {
        if (f(sum, i + 1, n)) return true;
        if (f(sum + v[i], i + 1, n)) return true;
    }
    return false; 
}
bool checkPowersOfThree(int n) 
{
    int num = 1;
    for(int i = 0; i < 15; i++)
    {
        num *= 3;
        v.push_back(num);
    }
    return f(0, 0, n);
}

int main()
{
    

    return 0;
}