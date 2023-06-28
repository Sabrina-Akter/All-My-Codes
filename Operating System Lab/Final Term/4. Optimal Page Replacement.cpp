#include <bits/stdc++.h>
using namespace std;

int main()
{
    int no_of_frames, no_of_pages, frames[10], pages[30], temp[10], flag1, flag2, flag3, i, j, k, pos, max, faults = 0;
    cout << "Enter number of frames: \n";
    cin >> no_of_frames;

    cout << "Enter number of pages: \n";
    cin >> no_of_pages;

    cout << "Enter page reference string: \n";

    for(i = 0; i < no_of_pages; ++i){
        cin >> pages[i];
    }

    for(i = 0; i < no_of_frames; ++i){
        frames[i] = -1;
    }

    for(i = 0; i < no_of_pages; ++i){
        flag1 = flag2 = 0;

        for(j = 0; j < no_of_frames; ++j){ //if available
            if(frames[j] == pages[i]){     //everything remains same
                   flag1 = flag2 = 1;
                   break;
               }
        }

        if(flag1 == 0){ //for -1 and first 3 frames
            for(j = 0; j < no_of_frames; ++j){
                if(frames[j] == -1){
                    faults++;
                    frames[j] = pages[i];
                    flag2 = 1;
                    break;
                }
            }    
        }

        if(flag2 == 0){ //If not available
            flag3 =0;

            for(j = 0; j < no_of_frames; ++j){ 
                temp[j] = -1;

                for(k = i + 1; k < no_of_pages; ++k){ //distance of every page
                    if(frames[j] == pages[k]){
                        temp[j] = k; //found
                        break;
                    }
                }
            }

            for(j = 0; j < no_of_frames; ++j){
                if(temp[j] == -1){ //not found
                    pos = j;       //pos is stored
                    flag3 = 1;
                    break;
                }
            }

            if(flag3 ==0){ //found and max temp pos is stored
                max = temp[0];
                pos = 0;

                for(j = 1; j < no_of_frames; ++j){
                    if(temp[j] > max){
                        max = temp[j];
                        pos = j;
                    }
                }               
            }

            frames[pos] = pages[i];
            faults++;
        }

        cout << "\n";

        for(j = 0; j < no_of_frames; ++j){
            cout << " " << frames[j];
        }
    }
    
    cout << "\nTotal Page Faults " <<  faults;

    return 0;
}
/*
Condition:
Q: 3 ta frame er moddhe konta te boshabo?
A: Right side theke check kore dekhte hobe 3 taar moddhe konta shobcheye dure.
Input:
3
20
7 0 1 2 0 3 0 4 2 3 0 3 2 1 2 0 1 7 0 1
3
Output:
Enter number of frames: 
Enter number of pages: 
Enter page reference string: 

 7 -1 -1
 7 0 -1
 7 0 1
 2 0 1
 2 0 1
 2 0 3
 2 0 3
 2 4 3
 2 4 3
 2 4 3
 2 0 3
 2 0 3
 2 0 3
 2 0 1
 2 0 1
 2 0 1
 2 0 1
 7 0 1
 7 0 1
 7 0 1
Total Page Faults 9
*/
