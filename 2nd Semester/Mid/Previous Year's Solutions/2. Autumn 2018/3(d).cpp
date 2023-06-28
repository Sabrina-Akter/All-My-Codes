#include<iostream>
using namespace std;

void Display(char='*', int=1);

int main()
{
    cout<<"No argument passed\n";
    Display('#');

    cout<<"First argument passed\n";
    Display('#');

    cout<<"Both argument passed\n";
    Display('#');

    return 0;
}

void Display(char c, int n)
{
    for(int i=1;i<=n;++i)
    {
        cout<<c;
    }
    cout<<endl;
}
