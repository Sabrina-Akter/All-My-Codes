#include<bits/stdc++.h>
using namespace std;

#define N 210
bool visit[N][N];
int row, col;
vector<vector<char>> B;

void dfs(int x, int y)
{
    visit[x][y]=1;
    B[x][y] = 'X';
    //1
    if(x-1>=0)
    {
        if(visit[x-1][y]==0 && B[x-1][y]=='O')
        {
            dfs(x-1,y);
        }
    }
    //2
    if(x+1<row)
    {
        if(visit[x+1][y]==0 && B[x+1][y]=='O')
        {
            dfs(x+1,y);
        }
    }
    //3
    if(y-1>=0)
    {
        if(visit[x][y-1]==0 && B[x][y-1]=='O')
        {
            dfs(x,y-1);
        }
    }
    //4
    if(y+1<col)
    {
        if(visit[x][y+1]==0 && B[x][y+1]=='O')
        {
            dfs(x,y+1);
        }
    }
}

void solve(vector<vector<char>>& board) {
        int i, j;
        row=board.size(), col=board[0].size();
        for(i=0;i<board.size();i++)
        {
            vector<char>x;
            for(j=0;j<board[i].size();j++)
            {
                x.push_back(board[i][j]);
            }
            B.push_back(x);
        }
        //1st row
        for(i=0;i<col;i++)
        {
            if(visit[0][i]==0 && B[0][i]=='O')
            {
                dfs(0,i);
            }
        }
        //last row
        for(i=0;i<col;i++)
        {
            if(visit[row-1][i]==0 && B[row-1][i]=='O')
            {
                dfs(row-1,i);
            }
        }
        //1st col
        for(i=0;i<row;i++)
        {
            if(visit[i][0]==0 && B[i][0]=='O')
            {
                dfs(i,0);
            }
        }
        //last col
        for(i=0;i<row;i++)
        {
            if(visit[i][col-1]==0 && B[i][col-1]=='O')
            {
                dfs(i,col-1);
            }
        }
        for(i=0;i<B.size();i++)
        {
            for(j=0;j<B[i].size();j++)
            {
                cout << B[i][j] << " ";
                if(B[i][j]=='O' && board[i][j]=='O')
                {
                    board[i][j] = 'X';
                }
            }
            cout << endl;
        }
    }

int main()
{
    vector<vector<char>> board = {{'X','X','X','X'},{'X','O','O','X'},{'X','X','O','X'},{'X','O','X','X'}};
    solve(board);
}
