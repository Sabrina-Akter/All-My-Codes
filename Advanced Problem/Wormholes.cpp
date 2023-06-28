#include <iostream>
#define MAX 15
#define INF 2147483647
using namespace std;

int grid[MAX][MAX], Min, vis[MAX], n;

int abs(int x)
{
    if(x < 0)
        x *= -1;
    return x;
}

int di(int sx, int sy, int dx, int dy)
{
    int x = 0;
    x += (sx > dx) ? sx - dx : dx - sx;
    x += (sy > dy) ? sy - dy : dy - sy;
    return x;
}
//brute force solution
void solve(int sx, int sy, int dx, int dy, int dist)
{
    Min = min(Min, di(sx, sy, dx, dy) + dist);         //check minimum in every step

    for(int i = 0; i <  n; i++){
        if(!vis[i]){
            vis[i] = 1;
            int tx = di(sx, sy, grid[i][0], grid[i][1]) + dist + grid[i][4];
            solve(grid[i][2], grid[i][3], dx, dy, tx);
            tx = di(sx, sy, grid[i][2], grid[i][3]) + dist + grid[i][4];
            solve(grid[i][0], grid[i][1], dx, dy, tx);
            vis[i] = 0;
        }
    }
}

int main()
{
    int test;

    cin>>test;

    while(test--){
        for(int i = 0; i < MAX; i++){
            for(int j = 0; j < MAX; j++)
                grid[i][j] = 0;
            vis[i] = 0;
        }
        int sx, sy, dx, dy;
        cin>>sx>>sy>>dx>>dy;        //source and destination
        cin>>n;     //number of wormholes

        for(int i = 0; i < n; i++){     //input wormholes
            for(int j = 0; j < 5; j++){
                cin>>grid[i][j];
            }
        }

        Min = INF;
        solve(sx, sy, dx, dy, 0);

        cout<<Min<<endl;
    }
}
