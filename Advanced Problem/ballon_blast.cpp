#include <iostream>
#define MAX 12
using namespace std;

int vis[MAX], arr[MAX], n, Max = -1, Left[MAX] = {-1}, Right[MAX] = {-1};

void solve(int idx, int score)
{
    if(idx >= n){
        Max = max(Max, score);
        return;
    }

    for(int i = 0; i < n; i++){
        if(!vis[i]){
            vis[i] = 1;
            int temp = 1;
            if(Left[i] != -1)
                temp *= arr[Left[i]];
            if(Right[i] != -1)
                temp *= arr[Right[i]];
            if(Left[i] == -1 && Right[i] == -1)
                temp = arr[i];
            if(i == 0)
                Left[Right[i]] = Left[i];
            else if(i == n - 1)
                Right[Left[i]] = Right[i];
            else{
                Left[Right[i]] = Left[i];
                Right[Left[i]] = Right[i];
            }
            solve(idx + 1, score + temp);
            vis[i] = 0;
            if(i == 0)
                Left[Right[i]] = i;
            else if(i == n - 1)
                Right[Left[i]] = i;
            else{
                Left[Right[i]] = i;
                Right[Left[i]] = i;
            }
        }
    }

}
int main()
{
    cin>>n;

    for(int i = 0; i < n; i++){
        cin>>arr[i];
        if(i == 0){
            Left[i] = -1;
            Right[i] = i + 1;
        }
        else if(i == n - 1){
            Left[i] = i - 1;
            Right[i] = -1;
        }
        else{
            Left[i] = i - 1;
            Right[i] = i + 1;
        }
    }

    solve(0, 0);

    cout<<Max<<endl;
}
