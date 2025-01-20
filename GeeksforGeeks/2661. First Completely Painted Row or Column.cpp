#include <bits/stdc++.h>
using namespace std;

int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) 
{
    int row = mat[0].size();
    int col = mat.size();
    vector <int> R(col), C(row);
    map <int, pair<int, int>> mp;
    for(int i = 0; i < mat.size(); i++)
    {
        for(int j = 0; j < mat[i].size(); j++) mp[mat[i][j]] = {i, j};
    }
    int x, y;
    for(int i = 0; i < arr.size(); i++)
    {
        x = mp[arr[i]].first;
        y = mp[arr[i]].second;
        R[x]++;
        C[y]++;
        if(R[x] == row || C[y] == col) return i;
    }
    return arr.size() - 1;
}

int main()
{
    

    return 0;
}