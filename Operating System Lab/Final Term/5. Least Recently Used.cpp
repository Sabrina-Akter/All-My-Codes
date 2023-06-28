#include <bits/stdc++.h>
using namespace std;
 
int findLRU(int time[], int n)
{
   int i, minimum = time[0], pos = 0;
   for (i = 1; i < n; i++)
   {
      if (time[i] < minimum)
      {
         minimum = time[i];
         pos = i;
      }
   }
   return pos;
}
 
int main()
{
   int no_of_frames, no_of_pages, frames[10], pages[30];
   int counter = 0, time[10], flag1, flag2, i, j, pos, faults = 0;
   cout << "Enter number of frames: ";
   cin >> no_of_frames;
 
   cout << "\nEnter number of pages: ";
   cin >> no_of_pages;
 
   cout << "\nEnter reference string: ";
 
   for (i = 0; i < no_of_pages; ++i)
   {
      cin >> pages[i];
   }
 
   for (i = 0; i < no_of_frames; ++i)
   {
      frames[i] = -1;
   }
 
   for (i = 0; i < no_of_pages; i++)
   {
      flag1 = flag2 = 0;
      for (j = 0; j < no_of_frames; j++)
      {
         if (frames[j] == pages[i])
         {
            counter++;
            time[j] = counter;
            flag1 = flag2 = 1;
            break;
         }
      }
 
      if (flag1 == 0)
      {
         for (j = 0; j < no_of_frames; j++)
         {
            if (frames[j] == -1)
            {
               counter++;
               faults++;
               frames[j] = pages[i];
               time[j] = counter;
               flag2 = 1;
               break;
            }
         }
      }
 
      if (flag2 == 0)
      {
         pos = findLRU(time, no_of_frames);
         counter++;
         faults++;
         frames[pos] = pages[i];
         time[pos] = counter;
      }
 
      cout << "\n";
 
      for (j = 0; j < no_of_frames; j++)
      {
         printf("%d\t", frames[j]);
      }
   }
 
   cout << "\nTotal Page Faults = " << faults;
 
   return 0;
}
/*
Condition:
Q: 3 ta frame theke konta te replace korbo?
A: Left Side theke jetar distance shobcheye beshi.
Input:
3
10
7 5 9 4 3 7 9 6 2 1
Output:
Enter number of frames: 
Enter number of pages: 
Enter reference string: 
7	-1	-1	
7	5	-1	
7	5	9	
4	5	9	
4	3	9	
4	3	7	
9	3	7	
9	6	7	
9	6	2	
1	6	2	
Total Page Faults = 10
*/