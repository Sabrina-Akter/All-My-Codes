//Problem: Pipeline (Samsung Coding Test)
//Programmer: IQBAL HOSSAIN
//Problem Link: https://www.hackerearth.com/problem/algorithm/question-7-4/
//Date: 10/11/19
#include <iostream>
#define MAX 1005
using namespace std;

struct data
{
    int x, y;
    data(){ };
    data(int sx, int sy){
        x = sx, y = sy;
    }
};

data q[MAX*MAX];
const int inf = 1<<28;

int n, m, grid[MAX][MAX], vis[MAX][MAX], dist[MAX][MAX];
int f = 0, r = 0;

//Valid move matrix
int mat[8][4][4] = {{{0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}},
                    {{1, 3, 6, 7}, {1, 3, 4, 5}, {1, 2, 5, 6}, {1, 2, 4, 7}},
                    {{0, 0, 0, 0}, {0, 0, 0, 0}, {1, 2, 5, 6}, {1, 2, 4, 7}},
                    {{1, 3, 6, 7}, {1, 3, 4, 5}, {0, 0, 0, 0}, {0, 0, 0, 0}},
                    {{1, 3, 6, 7}, {0, 0, 0, 0}, {1, 2, 5, 6}, {0, 0, 0, 0}},
                    {{1, 3, 6, 7}, {0, 0, 0, 0}, {0, 0, 0, 0}, {1, 2, 4, 7}},
                    {{0, 0, 0, 0}, {1, 3, 4, 5}, {0, 0, 0, 0}, {1, 2, 4, 7}},
                    {{0, 0, 0, 0}, {1, 3, 4, 5}, {1, 2, 5, 6}, {0, 0, 0, 0}}};

int fx[] = {0, 0, -1, 1};
int fy[] = {1, -1, 0, 0};

void push(int x, int y)
{
    q[r].x = x, q[r].y = y;
    r++;
}

data pop()
{
    data temp;
    temp.x = q[f].x, temp.y = q[f].y;
    f++;
    return temp;
}

void bfs(int sx, int sy)
{
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            dist[i][j] = inf;
            vis[i][j] = 0;
        }
    }

    if(grid[sx][sy] == 0)
        return;
    vis[sx][sy] = 1;
    dist[sx][sy] = 0;
    push(sx, sy);

    while(r > f){
        data u = pop();
        //cout<<u.x<<" "<<u.y<<endl;
        for(int i = 0; i < 4; i++){
            int tx = u.x + fx[i];
            int ty = u.y + fy[i];
            if(tx >= 0 && tx < n && ty >= 0 && ty < m && !vis[tx][ty] && grid[tx][ty] != 0){
                for(int j = 0; j < 4; j++){
                    if(grid[tx][ty] == mat[grid[u.x][u.y]][i][j]){      //possible to move
                        vis[tx][ty] = 1;
                        push(tx, ty);
                        dist[tx][ty] = dist[u.x][u.y] + 1;
                    }
                }
            }
        }
    }

}
int main()
{
    int x, y, len;
    int test;

    cin>>test;

    while(test--){
        int cnt = 0;
        cin>>n>>m>>x>>y>>len;

        r = f = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                cin>>grid[i][j];
            }
        }

        bfs(x, y);

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(dist[i][j] < len)
                    cnt++;
            }
        }

        cout<<cnt<<endl;
    }

    return 0;
}
