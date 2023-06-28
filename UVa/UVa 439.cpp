#include <bits/stdc++.h>
using namespace std;

#define fastt ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector <ll>
#define pb push_back

#define N 100000

vector <int> graph[N];
bool vis[N];
int dist[N];
int parent[N];

void bfs(int source){
    queue < int > Q;
    // initialization
    vis[source] = 1;
    dist[source] = 0;
    Q.push(source);

    while(!Q.empty()){
        int node = Q.front();
        Q.pop();

        for (int i = 0; i < graph[node].size(); i++){
            int next = graph[node][i];
            if (vis[next] == 0){
                vis[next] = 1; // visit
                dist[next] = dist[node] + 1; // update
                Q.push(next); // push to queue

                // set parent
                parent[next] = node;
            }
        }
    }
}

int main()
{
    fastt;
    string s;
    int i, j, k, num1, num2;
    int X[4] = {-1,-1,1,1};
    int Y[4] = {-1,1,1,-1};
    int A[9][9];
    int B[100];
    fill(A[0], A[0]+9*9, 0);
    fill(B, B+100, 0);

    for(i=1;i<=8;i++)
    {
        for(j=1;j<=8;j++)
        {
            num1 = ((i-1)*8)+j;
            for(k=0;k<4;k++)
            {
                if(((i+X[k])<1) || (j+Y[k]<1) || ((i+X[k])>8) || (j+Y[k]>8))
                {
                    continue;
                }
                else
                {
                    num2 = (((i+X[k])-1)*8)+(j+Y[k]);
                    graph[num1].push_back(num2);
                    //cout << "g[" << num1 << "].push_back(" << num2 << ")" << endl;
                }
            }
        }
    }

    int x1, x2, y1, y2, n;
    cin >> n;
    while(cin>>x1>>y1>>x2>>y2)
    {
        //cout << "x1="<<x1<<", y1="<<y1<<", x2="<<x2<<", y2="<<y2<<endl;
        bfs(((x1-1)*8)+y1);
        for (int i = 1; i <=64; i++)
        {
            if(i==(((x2-1)*8)+y2))
            {
                cout << "To get from  takes " << dist[i] << " knight moves." << endl;
                break;
            }
        }
        fill(vis,vis+N,0);
        fill(dist,dist+N,0);
        fill(parent,parent+N,0);
    }
    return 0;
}
