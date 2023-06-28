#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, p=0, p1 = 0, p2 = 0;
    char num[9]={'1', '2','3','4','5','6','7','8','9'};
    while(1)
    {
        system("cls");
        cout << "| " << num[0] << " | " << num[1] << " | " << num[2] << " |" << endl;
        cout << "-------------" << endl;
        cout << "| " << num[3] << " | " << num[4] << " | " << num[5] << " |" << endl;
        cout << "-------------" << endl;
        cout << "| " << num[6] << " | " << num[7] << " | " << num[8] << " |" << endl;

        cout << "\n\n";
        if(p1 == 2)
        {
            cout << "1st Player Wins!\n\"Game Over!\"\n\n";
            break;
        }
        if(p2 == 2)
        {
            cout << "2nd Player Wins!\n\"Game Over!\"\n\n";
            break;
        }
        if((p==9) && (p1==0) && (p2==0))
        {
            cout << "\"Game Draw!\"\n\"Game Over!\"\n\n";
            break;
        }
        p++;
        if(p%2!=0)
        {
            cout << "1ST Player's Turn: ";
            cin >> n;
            num[n-1] = 'X';
            if(num[0]=='X' && num[1]=='X' && num[2]=='X')
            {
                p1 = 2;
            }
            else if(num[3]=='X' && num[4]=='X' && num[5]=='X')
            {
                p1 = 2;
            }
            else if(num[6]=='X' && num[7]=='X' && num[8]=='X')
            {
                p1 = 2;
            }
            else if(num[0]=='X' && num[3]=='X' && num[6]=='X')
            {
                p1 = 2;
            }
            else if(num[1]=='X' && num[4]=='X' && num[7]=='X')
            {
                p1 = 2;
            }
            else if(num[2]=='X' && num[5]=='X' && num[8]=='X')
            {
                p1 = 2;
            }
            else if(num[0]=='X' && num[4]=='X' && num[8]=='X')
            {
                p1 = 2;
            }
            else if(num[2]=='X' && num[4]=='X' && num[6]=='X')
            {
                p1 = 2;
            }
        }
        else if(p%2==0)
        {
            cout << "2ND Player's Turn: ";
            cin >> n;
            num[n-1] = '0';
            if(num[0]=='0' && num[1]=='0' && num[2]=='0')
            {
                p2 = 2;
            }
            else if(num[3]=='0' && num[4]=='0' && num[5]=='0')
            {
                p2 = 2;
            }
            else if(num[6]=='0' && num[7]=='0' && num[8]=='0')
            {
                p2 = 2;
            }
            else if(num[0]=='0' && num[3]=='0' && num[6]=='0')
            {
                p2 = 2;
            }
            else if(num[1]=='0' && num[4]=='0' && num[7]=='0')
            {
                p2 = 2;
            }
            else if(num[2]=='0' && num[5]=='0' && num[8]=='0')
            {
                p2 = 2;
            }
            else if(num[0]=='0' && num[4]=='0' && num[8]=='0')
            {
                p2 = 2;
            }
            else if(num[2]=='0' && num[4]=='0' && num[6]=='0')
            {
                p2 = 2;
            }
        }
    }
    return 0;
}
