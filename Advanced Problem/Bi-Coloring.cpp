//Problem Link: https://practice.geeksforgeeks.org/problems/bipartite-graph/1
//Programmer: IQBAL HOSSAIN
#include <iostream>
using namespace std;
const int MAX = 100;

bool isBipartite(int G[][MAX],int V);
int main()
{
    int t;
	cin>>t;
	int g[MAX][MAX];
	while(t--)
	{
		int n;
		cin>>n;

		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cin>>g[i][j];
			}
		}

		cout<<isBipartite(g,n)<<endl;
	}
	return 0;
}

int f, r, q[MAX*MAX];

void push(int x)
{
    q[r] = x;
    r++;
}
int pop()
{
    int temp;
    temp = q[f];
    f++;
    return temp;
}
bool isBipartite(int G[][MAX],int V)
{
    int color[MAX] = {-1}, vis[MAX] = {0};

     for(int k = 0; k < V; k++){
        if(!vis[k]){
             f = r = 0;
             push(k);
             color[k] = 0;
             vis[k] = 1;

             while(r > f){
                int u = pop();
                for(int i = 0; i < V; i++){
                    if(G[u][i] == 1){
                        int v = i;
                        if(!vis[v]){
                            vis[v] = 1;
                            color[v] = !color[u];
                            push(v);
                        }
                        else{
                            if(color[v] == color[u]){
                                return false;
                            }
                        }
                    }
                }
             }
        }
     }

     return true;
}
