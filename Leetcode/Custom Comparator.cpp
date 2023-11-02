#include <bits/stdc++.h>
using namespace std;

bool comp(string &a, string &b)
{
    return a+b < b+a;
}

int main()
{
    vector <string> v = {"3", "30", "34", "5", "9"};
    sort(v.begin(), v.end(), comp);
    for(auto &val:v) cout << val << endl;
    return 0;
}