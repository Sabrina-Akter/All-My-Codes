#include <bits/stdc++.h>
using namespace std;

int main()
{
    // P0, P1, P2, P3, P4 are the Process names here
    // And three resources A, B, C

    int n, m, possible = 0;
    n = 5;                         // Number of processes
    m = 3;                         // Number of resources
    int alloc[5][3] = {{0, 1, 0},  // P0 // Allocation Matrix
                       {2, 0, 0},  // P1
                       {3, 0, 2},  // P2
                       {2, 1, 1},  // P3
                       {0, 0, 2}}; // P4

    int max[5][3] = {{7, 5, 3},  // P0 // MAX Matrix
                     {3, 2, 2},  // P1
                     {9, 0, 2},  // P2
                     {2, 2, 2},  // P3
                     {4, 3, 3}}; // P4

    int avail[3] = {3, 3, 2}; // Available Resources

    int need[5][3] = {{7, 4, 3}, // Need = Max-Allocation
                      {0, 2, 0},
                      {6, 0, 0},
                      {0, 1, 1},
                      {4, 3, 1}};

    int p, a, b, c;
    cout << "Which process requests the resources?";
    cin >> p;
    cout << "Enter the three resources A, B, and C:";
    cin >> a >> b >> c; // 1 0 2

    // Need of Process_i: Max_i - Alloc_i
    int n_p[3] = {max[p][0] - alloc[p][0], max[p][1] - alloc[p][1], max[p][2] - alloc[p][2]}; // 3 2 2 - 2 0 0 = 1 2 2

    // Step 1: If Request_i <= Need_i, goto 2:
    if (a <= n_p[0] && b <= n_p[1] && c <= n_p[2]) // 1 0 2 <= 1 2 2
    {
        // Step 2: If Request_i <= Available_i, goto 3:
        if (a <= avail[0] && b <= avail[1] && c <= avail[2]) // 1 0 2 <= 3 3 2
        {
            // Operation 1: Available = Available - Request
            avail[0] = avail[0] - a, avail[1] = avail[1] - b, avail[2] = avail[2] - c; // 3 3 2 - 1 0 2 = 2 3 0
            // Operation 2: Allocation = Allocation + Request
            alloc[p][0] = alloc[p][0] + a, alloc[p][1] = alloc[p][1] + b, alloc[p][2] = alloc[p][2] + c; // 2 0 0 + 1 0 2 = 3 0 2
            // Operation 3: Need = Need - Request
            need[p][0] = n_p[0] - a, need[p][1] = n_p[1] - b, need[p][2] = n_p[2] - c; // 1 2 2 - 1 0 2 = 0 2 0
            possible = 1;
        }
    }

    if (possible == 1)
    {
        cout << alloc[1][0] << " " << alloc[1][1] << " " << alloc[1][2] << " " << endl;
        cout << avail[0] << " " << avail[1] << " " << avail[2] << " " << endl;
        cout << need[1][0] << " " << need[1][1] << " " << need[1][2] << " " << endl;
        // Banker's Algorithm:
        int i, j, k;
        for (i = 0; i < n; i++)
        {                                             // i is for row
            for (j = 0; j < m; j++)                   // j is for column
                need[i][j] = max[i][j] - alloc[i][j]; // 3 columns of max is compared with
                                                      // 3 columns of alloc is compared with
                                                      // of every row (5 rows)
        }
        int f[n], ans[n], ind = 0;
        for (k = 0; k < n; k++)
        {
            f[k] = 0; // flag variable of each process = 0
        }
        int y = 0;
        for (k = 0; k < 5; k++)
        {
            for (i = 0; i < n; i++)
            {
                if (f[i] == 0)
                {

                    int flag = 0;
                    for (j = 0; j < m; j++)
                    {
                        if (need[i][j] > avail[j])
                        {
                            flag = 1;
                            break;
                        }
                    }

                    if (flag == 0)
                    {
                        ans[ind++] = i; // for the order
                        for (y = 0; y < m; y++)
                            avail[y] += alloc[i][y];
                        f[i] = 1;
                    }
                }
            }
        }

        int flag = 1;

        for (int i = 0; i < n; i++)
        {
            if (f[i] == 0)
            {
                flag = 0;
                printf("The following system is not safe");
                break;
            }
        }

        if (flag == 1)
        {
            printf("Following is the SAFE Sequence\n");
            for (i = 0; i < n - 1; i++)
                printf("P%d -> ", ans[i]);
            printf("P%d", ans[n - 1]);
        }
    }

    return 0;
}