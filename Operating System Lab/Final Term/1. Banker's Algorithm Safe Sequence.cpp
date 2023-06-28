#include <bits/stdc++.h>
using namespace std;

int main()
{
	// P0, P1, P2, P3, P4 are the Process names here
	//And three resources A, B, C

	int n, m, i, j, k; //i, j, k are for loops
	n = 5; // Number of processes
	m = 3; // Number of resources
	int alloc[5][3] = { { 0, 1, 0 }, // P0 // Allocation Matrix
						{ 2, 0, 0 }, // P1
						{ 3, 0, 2 }, // P2
						{ 2, 1, 1 }, // P3
						{ 0, 0, 2 } }; // P4

	int max[5][3] = { { 7, 5, 3 }, // P0 // MAX Matrix
					{ 3, 2, 2 }, // P1
					{ 9, 0, 2 }, // P2
					{ 2, 2, 2 }, // P3
					{ 4, 3, 3 } }; // P4

	int avail[3] = { 3, 3, 2 }; // Available Resources

	
	int need[n][m]; //Need = Max-Allocatin
	for (i = 0; i < n; i++) { // i is for row
		for (j = 0; j < m; j++) // j is for column
			need[i][j] = max[i][j] - alloc[i][j]; //3 columns of max is compared with
			                                      //3 columns of alloc is compared with
			                                      //of every row (5 rows)
	}
    int f[n], ans[n], ind = 0;
	for (k = 0; k < n; k++) {
		f[k] = 0; //flag variable of each process = 0
	}
	int y = 0;
	for (k = 0; k < 5; k++) {
		for (i = 0; i < n; i++) {
			if (f[i] == 0) {

				int flag = 0;
				for (j = 0; j < m; j++) {
					if (need[i][j] > avail[j]){
						flag = 1;
						break;
					}
				}

				if (flag == 0) {
					ans[ind++] = i; //for the order
					for (y = 0; y < m; y++)
						avail[y] += alloc[i][y];
					f[i] = 1;
				}
			}
		}
	}

	int flag = 1;

	for(int i=0;i<n;i++)
	{
	if(f[i]==0)
	{
		flag=0;
		printf("The following system is not safe");
		break;
	}
	}

	if(flag==1)
	{
	printf("Following is the SAFE Sequence\n");
	for (i = 0; i < n - 1; i++)
		printf("P%d -> ", ans[i]);
	printf("P%d", ans[n - 1]);
	}


	return (0);

}
//If Pi's need <= available, then enters safe sequence.
//And avilable = available + Pi's allocation
//Following is the SAFE Sequence: P1 -> P3 -> P4 -> P0 -> P2