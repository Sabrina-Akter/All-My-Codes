#include <bits/stdc++.h>
using namespace std;

int wateringPlants(vector<int>& plants, int capacity) {
        int i, c=capacity, step=0;
        for(i=0;i<plants.size();i++)
        {
            if(plants[i]<=c)
            {
                step++;
                c-=plants[i];
            }
            else
            {
                step+=(i*2);
                step++;
                c=capacity-plants[i];
            }
        }
        cout << step << endl;
        return step;
    }

int main()
{
    vector <int> plants = {1,1,1,4,2,3};
    int capacity = 4;
    wateringPlants(plants, capacity);

    return 0;
}