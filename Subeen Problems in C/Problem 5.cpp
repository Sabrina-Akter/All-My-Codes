#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T,number;
    cin>>T;
    for(int k=1;k<=T;k++)
    {
        cin>>number;
        for(int i=0;i<number;i++){
            for(int j=0;j<number;j++){
                cout<<"*";
            }
            cout<<"\n";
        }
    if(k!=T){
            cout <<"\n";
        }
    }

    return 0;
}
