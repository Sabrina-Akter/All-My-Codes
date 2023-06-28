#include <bits/stdc++.h>
using namespace std;

int done[210][210];

void dfs(int i, int j, vector<vector<char>>& board)
{
    done[i][j]=1;
    if(i+1<board.size() && board[i+1][j]=='X' && done[i+1][j]==0)
    {
        dfs(i+1, j, board);
    }
    if(i-1>=0 && board[i-1][j]=='X' && done[i-1][j]==0)
    {
        dfs(i-1, j, board);
    }
    if(j+1<board[0].size() && board[i][j+1]=='X' && done[i][j+1]==0)
    {
        dfs(i, j+1, board);
    }
    if(j-1>=0 && board[i][j-1]=='X' && done[i][j-1]==0)
    {
        dfs(i, j-1, board);
    }
}

int countBattleships(vector<vector<char>>& board) {
        memset(done, 0, sizeof(done));
        int i, j, cnt=0;
        for(i=0;i<board.size();i++)
        {
            for(j=0;j<board[0].size();j++)
            {
                if(board[i][j]=='X' && done[i][j]==0)
                {
                    cnt++;
                    dfs(i, j, board);
                }
            }
        }
        cout << cnt << endl;
        return cnt;
    }

int main()
{
    vector<vector<char>> board = {{'X','.','.','X'},{'.','.','.','.'},{'X','.','.','X'}};
    countBattleships(board);
    return 0;
}