#include <bits/stdc++.h>
using namespace std;

int ar[15][15];
int X[8]={+0,+0,+1,-1,-1,+1,-1,+1};   // King's Moves
int Y[8]={-1,+1,+0,+0,+1,+1,-1,-1};  // King's Moves
bool isValidSudoku(vector<vector<char>>& board) {
        int i, j, k, f=0;

        ar[1][1] = 1, ar[1][4] = 1, ar[1][7] = 1;
        ar[4][1] = 1, ar[4][4] = 1, ar[4][7] = 1;
        ar[7][1] = 1, ar[7][4] = 1, ar[7][7] = 1;
        
        for(i=0;i<board.size();i++)
        {
            for(j=0;j<board[i].size();j++)
            {
                if(ar[i][j]==1)
                {
                    map <char, int> m;
                    m[board[i][j]]++;
                    for(k=0;k<8;k++)
                    {
                        if(board[i+X[k]][j+Y[k]]=='.')
                        {
                            continue;
                        }
                        else
                        {
                            m[board[i+X[k]][j+Y[k]]]++;
                            if(m[board[i+X[k]][j+Y[k]]]==2)
                            {
                                f=1;
                            }
                        }
                    }
                }
            }
        }

        for(i=0;i<board.size();i++)
        {
            map <int, int> m;
            for(j=0;j<board[i].size();j++)
            {
                if(board[i][j]!='.')
                {
                    m[board[i][j]]++;
                    if(m[board[i][j]]==2)
                    {
                        f=1;
                    }
                }
            }
        }

        for(i=0;i<board.size();i++)
        {
            map <int, int> m;
            for(j=0;j<board[i].size();j++)
            {
                if(board[j][i]!='.')
                {
                    m[board[j][i]]++;
                    if(m[board[j][i]]==2)
                    {
                        f=1;
                    }
                }
            }
        }
        if(f==0)
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
    vector<vector<string>> s_board = {
        {"5","3",".",".","7",".",".",".","."},
        {"6",".",".","1","9","5",".",".","."},
        {".","9","8",".",".",".",".","6","."},
        {"8",".",".",".","6",".",".",".","3"},
        {"4",".",".","8",".","3",".",".","1"},
        {"7",".",".",".","2",".",".",".","6"},
        {".","6",".",".",".",".","2","8","."},
        {".",".",".","4","1","9",".",".","5"},
        {".",".",".",".","8",".",".","7","9"}
    };
    vector<vector<char>> board;
    int i, j;
    for(i=0;i<s_board.size();i++)
    {
        vector<char> v_char;
        for(j=0;j<s_board[i].size();j++)
        {
            char c = s_board[i][j][0];
            v_char.push_back(c);
        }
        board.push_back(v_char);
    }
    isValidSudoku(board);
    return 0;
}
