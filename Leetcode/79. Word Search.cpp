#include <bits/stdc++.h>
using namespace std;

int fl=0;
int done[10][10];
int row, col;
char b[10][10];

void f(int i, int j, string s, string word)
{
    done[i][j]=1;
    //base case
    if(s.size()==word.size())
    {
        if(s==word)
        {
            fl=1;
        }
        return;
    }
    //1:Right
    if(j+1<col)
    {
        if(done[i][j+1]==0)
        {
            s+=b[i][j+1];
            f(i, j+1, s, word);
            s.pop_back();
            done[i][j+1] = 0;
        }
    }
    //2:Left
    if(j-1>=0)
    {
        if(done[i][j-1]==0)
        {
            s+=b[i][j-1];
            f(i, j-1, s, word);
            s.pop_back();
            done[i][j-1] = 0;
        }
    }
    //3:Up
    if(i-1>=0)
    {
        if(done[i-1][j]==0)
        {
            s+=b[i-1][j];
            f(i-1, j, s, word);
            s.pop_back();
            done[i-1][j] = 0;
        }
    }
    //4:Down
    if(i+1<row)
    {
        if(done[i+1][j]==0)
        {
            s+=b[i+1][j];
            f(i+1, j, s, word);
            s.pop_back();
            done[i+1][j] = 0;
        }
    }
    done[i][j] = 0;
}

bool exist(vector<vector<char>>& board, string word) {
        int i, j; 
        row = board.size(), col = board[0].size();
        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            {
                done[i][j] = 0;
                b[i][j] = board[i][j];
            }
        }
        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            {
                string s="";
                s+=board[i][j];
                f(i, j, s, word);
            }
        }
        if(fl==1)
        {
            return true;
        } 
        else
        {
            return false;
        }
    }

int main()
{
    vector<vector<char>> v = {{'A','B','C','E'},{'S','F','C','S'},{'A','D','E','E'}};
    string s = "ABCB";
    exist(v, s);
    return 0;
}