/*#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
cout<<"Before using the ios::showpoint flag\n"
<<"------------------------------------"<<endl;
cout<<"cout prints 88.88000 as: "<<88.88000
<<"\ncout prints 88.80000 as: "<<88.80000
<<"\ncout prints 88.00000 as: "<<88.00000
<<"\n\nAfter using the ios::showpoint flag\n"
<<"-----------------------------------"<<endl;
cout.setf(ios::showpoint);
cout<<"cout prints 88.88000 as: "<<88.88000
<<"\ncout prints 88.80000 as: "<<88.80000
<<"\ncout prints 88.00000 as: "<<88.00000<<endl;
}
/*
#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
    cout << "Before using the ios::showpoint flag\n"
    <<"_____________________" << endl;
    cout << "cout prints 88.88000 as: " << 88.88000
    << "\ncout prints 88.80000 as: " << 88.80000
    << "\ncout prints 88.00000 as: " << 88.00000
    <<"\n\nAfter using the ios::showpoint flag\n"
    <<"__________________"<<endl;
    cout.setf(ios::showpoint);
    cout<<"cout prints 88.88000 as: " << 88.88000
    <<"\ncout prints 88.80000 as: " << 88.80000
    <<"\ncout prints 88.00000 as: " << 88.00000 << endl;
}*/

/*#include <iostream>
#include <iomanip>
using namespace std;
int main(void)
{
    long p = 30000;
    cout << p
    << "printed using the default pad character\n"
    << "for right and left justifies as hex\n"
    << "with internal justification.\n"
    << "____________________\n";
    cout.setf(ios::showbase);
    cout<<setw(10)<<p<<endl;
    cout<<setf(ios::left,ios::adjustfield);
    cout<<setw(10)<<p<<endl;
    cout<<setf(ios::internal,ios::adjustfield);
    cout<<setw(10)<<hex<<p<<"\n\n";

    cout << "using various padding character" << endl;
    cout << "_________________________" << endl;
    cout<<setf(ios::right,ios::adjustfield);
    cout.fill('#');
    cout<<setw(10)<<dec<<p<<"\n";
    cout<<setf(ios::left,ios::adjustfield);
    cout<<setw(10)<<setfill('$')<<p<<"\n";
    cout<<setf(ios::internal,ios::adjustfield);
    cout<<setw(10)<<setfill('*')<<hex<<p<<endl;
}*/
#include <iostream>
#include <iomanip>
using namespace std;


int main(void)
{
    long p = 30000;
    cout<<p
    <<" printed using the default pad character\n"
    <<"for right and left justified and as hex\n"
    <<"with internal justification.\n"
    <<"--------------------------------------------\n";
    cout.setf(ios::showbase);
    cout<<setw(10)<<p<<endl;
    cout.setf(ios::left,ios::adjustfield);
    cout<<setw(10)<<p<<endl;
    cout.setf(ios::internal,ios::adjustfield);
    cout<<setw(10)<<hex<<p<<"\n\n";
    cout<<"Using various padding character"<<endl;
    cout<<"-------------------------------"<<endl;
    cout.setf(ios::right,ios::adjustfield);
    cout.fill('#');
    cout<<setw(10)<<dec<<p<<'\n';
    cout.setf(ios::left,ios::adjustfield);
    cout<<setw(10)<<setfill('$')<<p<<'\n';
    cout.setf(ios::internal,ios::adjustfield);
    cout<<setw(10)<<setfill('*')<<hex<<p<<endl;
}
