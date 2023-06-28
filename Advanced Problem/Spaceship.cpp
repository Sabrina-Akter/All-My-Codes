#include <iostream>
using namespace std;

int ans, grid[15][15], row, col;

 void solve(int n, int pos, int bomb, int score)
 {
     if(n < 0){
        ans = max(ans, score);
        return;
     }

     for(int i = 0; i < 5; i++){
        if(grid[n][i] == 2){
            ans = max(ans, score);
            return;
        }
     }

     if(bomb == 1){
        int temp[15][15];
        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                temp[i][j] = grid[i][j];
            }
        }

        for(int i = n - 1; i >= n - 5; i--){
            if(i < 0)
                break;
            for(int j = 0; j < 5; j++){
                if(grid[i][j] == 2)
                    grid[i][j] = 0;
            }
        }

        int t;
        if(pos != 0){
            t = (grid[n][pos-1] == 1);
            solve(n - 1, pos - 1, 0, score + t);
        }
        if(pos != 4){
            t = grid[n][pos+1] == 1;
            solve(n - 1, pos + 1, 0, score + t);
        }
        t = grid[n][pos] == 1;
        solve(n - 1, pos, 0, score + t);

        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++)
                grid[i][j] = temp[i][j];
        }
     }

     int t = grid[n][pos] == 1;
     solve(n - 1, pos, bomb, score + t);
     if(pos != 0){
        t = grid[n][pos-1] == 1;
        solve(n - 1, pos - 1, bomb, score + t);
     }
     if(pos != 4){
        t = grid[n][pos+1] == 1;
        solve(n - 1, pos + 1, bomb, score + t);
     }
 }

int main() {
	int t;

	cin>>t;
	while(t--){
		cin>>row>>col;
        for(int i = 0; i < row; i++){
			for(int j = 0; j < col; j++){
				cin>>grid[i][j];
			}
		}
		ans = 0;
		solve(row-1, 2, 1, 0);
		cout<<ans<<endl;
	}

	return 0;
}


