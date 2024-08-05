#include <bits/stdc++.h>
using namespace std;

string kthDistinct(vector<string>& arr, int k) 
{
    map <string, int> freq;
    for(int i = 0; i < arr.size(); i++)
    {
        freq[arr[i]]++;
    }
    int cnt = 0;
    for(int i = 0; i < arr.size(); i++)
    {
        if(freq[arr[i]] == 1)  cnt++;
        if(cnt == k) return arr[i];
    }
    return "";
}

int main()
{
    

    return 0;
}