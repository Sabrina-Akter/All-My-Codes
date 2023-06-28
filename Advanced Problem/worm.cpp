#include<bits/stdc++.h>
using namespace std;


int mini(int a, int b)
{
    return a > b ? b : a;
}

int maxi(int a, int b)
{
    return a < b ? b : a;
}

int dist(int x1, int y1, int x2, int y2)
{
    x1 = x1 > x2 ? x1 - x2 : x2 - x1;
    y1 = y1 > y2 ? y1 - y2 : y2 - y1;

    return x1 + y1;

}
int x[300], y[300], adj[4005][4005], indices[300][300], n;

void unsetXY()
{
    for(int i=0; i<299; i++)
    {
        x[i] = y[i] = -1;
    }
}


int duplicate(int sss, int ddd)
{
    //cout<<"YOO"<<endl;

    for(int i=0; i<n; i++)
    {
        if(sss == x[i] && ddd == y[i])
        {
            // cout<<sss<<' '<<ddd<<' '<<i<<endl;
            return i;
        }
    }

    return -1;
}

int main()
{

    int tc;
    cin>>tc;
    while(tc--)
    {
        n = 0;

        unsetXY();
        for(int i=0; i<100; i++)
        {
            for(int j=0; j<100; j++)
            {
                if(i == j)
                    adj[i][j] = 0;
                else 
                    adj[i][j] = 100000000;
            }
        }



        //cout<<n<<endl;

        int xsrc, ysrc, xdest, ydest, N;
        cin>>xsrc>>ysrc>>xdest>>ydest>>N;

        
        x[n] = xsrc;
        y[n] = ysrc;
        indices[xsrc][ysrc] = n++;
        
        if(xsrc == xdest && ysrc == ydest)
        {
            indices[xdest][ydest] = n-1;
        } else {
            x[n] = xdest;
            y[n] = ydest;
            indices[xdest][ydest] = n++;
        }


        int srci = indices[xsrc][ysrc], srcj = indices[xdest][ydest];
        adj[srci][srcj] = adj[srcj][srci] = dist(x[srci], y[srci], x[srcj], y[srcj]);

        int xs, xd, ys, yd,  c; // wormhole points -> start x, start y, dest. x, dest. y, cost
        
        for(int i=0; i<N; i++)
        {
            cin>>xs>>ys>>xd>>yd>>c;

            int dup = duplicate(xs, ys);
            int srcind;

            if(dup == -1)
            {
                x[n] = xs;
                y[n] = ys;        
                srcind = indices[xs][ys] = n++;
            } else {
                srcind = dup;
            }

            dup = duplicate(xd, yd);


            int destind;
            if(dup == -1)
            {
                x[n] = xd;
                y[n] = yd;                
                destind = indices[xd][yd] = n++;

            } else {
                destind = dup;
            }

            int di = dist(xs, ys, xd, yd);

            di = mini(di, mini(adj[destind][srcind], adj[srcind][destind]));
            adj[destind][srcind] = adj[srcind][destind] = mini(di, c);

        }

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(i == j) continue;
                adj[i][j] = adj[j][i] = mini(mini(adj[i][j], adj[j][i]), dist(x[i], y[i], x[j], y[j]));
            }
        }


        for(int k=0; k<n; k++)
        {
            for(int i=0; i<n; i++)
            {
                for(int j=0; j<n; j++)
                {
                    
                    adj[j][i] = adj[i][j] = mini(mini(adj[i][j], adj[j][i]), adj[i][k] + adj[k][j]);                   
                }
        
            }        
        }

        printf("%d\n", adj[srci][srcj]);

    }
    return 0;
}

/* 
Input:
2
0 0 100 100
3
1 1 100 100 3
5 5 3 6 100
3 6 230 250 5

0 0 7 5
5
0 1 0 5 5
1 2 2 5 4
3 1 4 1 3
3 3 5 1 2
3 1 7 4 1

Output:
5
6


 */