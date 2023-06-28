#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
static const double EPS=1e-8;
int sgn(double x)
{
    if(fabs(x)<EPS) return 0;
    if(x<0) return -1;
    else return 1;
}
struct Point{
    double x,y;
    Point(){}
    Point(double _x,double _y):x(_x),y(_y){}
    void input() { cin>>x>>y; }
    void output() { cout<<fixed<<setprecision(2)<<x<<" "<<y<<endl; }
    Point operator - (const Point &b) const { return Point(x-b.x,y-b.y); }
    double operator ^ (const Point &b) const { return x*b.y-y*b.x; }
    double operator * (const Point &b) const { return x*b.x+y*b.y; }
};
struct Line{
    Point s,e;
    Line(){}
    Line(Point _s,Point _e):s(_s),e(_e){}
    void input() { s.input(); e.input(); }
    bool parallel(Line v) { return sgn((e-s)^(v.e-v.s))==0; }
    int relation(Point p) {
        int c=sgn((p-s)^(e-s));
        if(c<0) return 1;
        else if(c>0) return 2;
        else return 3;
    }
    int linecrossline(Line v) {
        if((*this).parallel(v))
            return v.relation(s)==3;
        return 2;
    }
    Point crosspoint(Line v) {
        double a1=(v.e-v.s)^(s-v.s),a2=(v.e-v.s)^(e-v.s);
        return Point((s.x*a2-e.x*a1)/(a2-a1),(s.y*a2-e.y*a1)/(a2-a1));
    }
};
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0),cout.tie(0);
    int T;
    cin>>T;
    cout<<"INTERSECTING LINES OUTPUT"<<endl;
    while(T--)
    {
        Line line1,line2;
        line1.input(),line2.input();
        if(line1.linecrossline(line2)==0)
            cout<<"NONE"<<endl;
        else if(line1.linecrossline(line2)==1)
            cout<<"LINE"<<endl;
        else
        {
            cout<<"POINT ";
            Point p=line1.crosspoint(line2);
            p.output();
        }
    }
    cout<<"END OF OUTPUT"<<endl;
    return 0;
}
