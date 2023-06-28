#include <bits/stdc++.h>
using namespace std;

int abs(int a, int b)
{
    return (a > b) ? (a - b) : (b - a);
}

int dist(int a, int b, int g)
{
    int res = 0;
    for(int i = a; i <= b; i++){
        res += abs(g, i) + 1;
    }
    return res;
}

int main()
{
    int gate[3], fishingSpot, fisherMan[3];

    cin>>fishingSpot;
    cin>>gate[0]>>gate[1]>>gate[2];
    cin>>fisherMan[0]>>fisherMan[1]>>fisherMan[2];

    int sum = (fisherMan[0] + fisherMan[1] + fisherMan[2]);

    int ans = 1<<28;
    for(int i = 1; i <= fishingSpot - sum + 1; i++){
        for(int j = i + fisherMan[0]; j <= fishingSpot - fisherMan[2] - fisherMan[1] + 1; j++){
            for(int k = j + fisherMan[1]; k <= fishingSpot - fisherMan[2] + 1; k++){
                //printf("(%d, %d) : (%d, %d) : (%d, %d)\n", i, i + fisherMan[0] - 1, j, j + fisherMan[1] - 1, k, k + fisherMan[2] - 1);
                int tempA = dist(i, i + fisherMan[0] - 1, gate[0]);
                int tempB = dist(j, j + fisherMan[1] - 1, gate[1]);
                int tempC = dist(k, k + fisherMan[2] - 1, gate[2]);
                //printf("%d\n", tempA + tempB + tempC);
                ans = min(ans, tempA + tempB + tempC);
            }
        }
    }

    cout<<ans<<endl;

    return 0;
}
