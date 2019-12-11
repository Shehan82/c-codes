#include<iostream>
#include<string>
#include<cmath>
#include<iomanip>
//#include<conio.h>
using namespace std;

class counter
{
    public:
    static int cnt;
    double a,b,c,val;

    counter()
    {
        cout<<"Constructor called\n";
        cnt++;
    }

    public:
    void volume(double a, double b, double c)
    {
        val=a*b*c;
        cout<<val;
    }

    ~counter()
    {
        //cout<<"\n";
        cout<<"Constructor closed\n";
    }
};

int counter::cnt=0;

int main()
{
    counter c1,c2;
    cout<<"\n"<<counter::cnt<<"\n";
    //cin>>c1.a>>c1.b>>c1.c;
    c1.volume(3.0,3.24,5.21);
}
