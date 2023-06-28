#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, n, a[50], frame[10], no, k, avail, count = 0;
    printf("ENTER THE NUMBER OF PAGES:\n");
    cin >> n;

    printf("ENTER THE PAGE NUMBER:\n");
    for (i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
   
    printf("ENTER THE NUMBER OF FRAMES:\n");
    cin >> no;

    //At first, we we will initialize -1 in all the frames

    for (i = 0; i < no; i++)
    {
        frame[i] = -1;
    }
    j = 0;
    printf("ref string\tpage frames\n"); //'\t' is a horizontal tab
    for (i = 1; i <= n; i++)
    {
        printf("%d\t\t", a[i]); //ref string
        avail = 0; //available flag
        for (k = 0; k < no; k++) //3 frames
            if (frame[k] == a[i]) //checks all three frames
                avail = 1;
        if (avail == 0)
        {
            frame[j] = a[i]; //j is initially 0
            j = (j + 1) % no; //j will always be 0, 1 or 2
            count++; //count of page fault
            for (k = 0; k < no; k++) 
                printf("%d\t", frame[k]); //prints all three frames
        }
        printf("\n");
    }
    cout << "Page Fault is " << count;
    return 0;
}
/*
Condition: Jeta (shobcheye purono/shobcheye lomba shomoy dhore aase) ota replace hoye jaabe.
Input:
20
7 0 1 2 0 3 0 4 2 3 0 3 2 1 2 0 1 7 0 1
3
Output:
ENTER THE NUMBER OF PAGES:
ENTER THE PAGE NUMBER:
ENTER THE NUMBER OF FRAMES:
ref string	page frames
7		7	-1	-1	
0		7	0	-1	
1		7	0	1	
2		2	0	1	
0		
3		2	3	1	
0		2	3	0	
4		4	3	0	
2		4	2	0	
3		4	2	3	
0		0	2	3	
3		
2		
1		0	1	3	
2		0	1	2	
0		
1		
7		7	1	2	
0		7	0	2	
1		7	0	1	
Page Fault is 15
*/