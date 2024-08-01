#include <bits/stdc++.h>
using namespace std;

int countSeniors(vector<string>& details) 
{
    int ans = 0;
    for(int i = 0; i < details.size(); i++)
    {
        string temp;
        temp += details[i][11];
        temp += details[i][12];
        int age = stoi(temp);
        if(age > 60) ans++;
    }
    return ans;
}

int main()
{
    

    return 0;
}