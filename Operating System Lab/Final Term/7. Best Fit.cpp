#include <iostream>

using namespace std;

int main()
{
    int fragment[20], b[20], p[20], i, j, nb, np, temp, lowest = 9999;
    static int barray[20], parray[20];
    cout << "\nEnter the number of blocks:";
    cin >> nb;
    cout << "\nEnter the number of processes:";
    cin >> np;
    cout << "\nEnter the size of the blocks:-\n";
    for (i = 1; i <= nb; i++)
    {
        cout << "\nBlock no." << i << ":";
        cin >> b[i];
    }
    cout << "\nEnter the size of the processes :-\n";
    for (i = 1; i <= np; i++)
    {
        cout << "\nProcess no. " << i << ":";
        cin >> p[i];
    }
    for (i = 1; i <= np; i++)
    {
        for (j = 1; j <= nb; j++)
        {
            if (barray[j] != 1)
            {
                temp = b[j] - p[i];
                if (temp >= 0)
                    if (lowest > temp)
                    {
                        parray[i] = j; //process = block
                        lowest = temp;
                    }
            }
        }
        fragment[i] = lowest;
        barray[parray[i]] = 1;
        lowest = 10000;
    }
    cout << "\nProcess_no\tProcess_size\tBlock_no\tBlock_size\tFragment";
    for (i = 1; i <= np && parray[i] != 0; i++)
        cout << "\n"
             << i << "\t\t" << p[i] << "\t\t" << parray[i] << "\t\t" << b[parray[i]] << "\t\t" << fragment[i];
    return 0;
}
/*
Condition: p(i)<=block(i) && least_fragment
Input:
5 4
10 15 5 9 3
1 4 7 12
Output:
Enter the number of blocks:
Enter the number of processes:
Enter the size of the blocks:-

Block no.1:
Block no.2:
Block no.3:
Block no.4:
Block no.5:
Enter the size of the processes :-

Process no. 1:
Process no. 2:
Process no. 3:
Process no. 4:
Process_no	Process_size	Block_no	Block_size	Fragment
1		    1		        5		    3		    2
2		    4		        3		    5		    1
3		    7		        4		    9		    2
4		    12		        2		    15		    3
*/