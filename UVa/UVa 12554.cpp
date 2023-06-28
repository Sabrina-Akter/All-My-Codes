#include <bits/stdc++.h>
using namespace std;

struct song
{
    char ss[10];
};
struct member
{
    char s[50];
};

int main()
{
    int n,i,j,k;
    cin >> n;
    struct member A[n];
    for(i=0;i<n;i++)
    {
        cin >> A[i].s;
    }
    struct song B[16];
    strcpy(B[0].ss, "Happy");
    strcpy(B[1].ss, "birthday");
    strcpy(B[2].ss, "to");
    strcpy(B[3].ss, "you");
    strcpy(B[4].ss, "Happy");
    strcpy(B[5].ss, "birthday");
    strcpy(B[6].ss, "to");
    strcpy(B[7].ss, "you");
    strcpy(B[8].ss, "Happy");
    strcpy(B[9].ss, "birthday");
    strcpy(B[10].ss, "to");
    strcpy(B[11].ss, "Rujia");
    strcpy(B[12].ss, "Happy");
    strcpy(B[13].ss, "birthday");
    strcpy(B[14].ss, "to");
    strcpy(B[15].ss, "you");
    double x;
    x = n/16.00;
    int y = ceil(x);
    int f = -1;
    for(j=0;j<y;j++)
    {
        for(k=0;k<16;k++)
        {
            f++;
            if(f==n)
            {
                f=0;
            }
            cout << A[f].s << ": " << B[k].ss << endl;
        }
    }
    return 0;
}
