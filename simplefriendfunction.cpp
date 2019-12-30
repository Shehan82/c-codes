#include<iostream>
#include<assert.h>
#include<string>
#include<vector>
using namespace std;

class box
{
   private:
   int width;
   
   public:
   void setwidth(int wid);
   friend void getwidth(const box &box);
};

void box::setwidth(int wid) {width=wid;}

void getwidth(const box &box)
{
   cout<<"width of the box = "<<box.width<<endl;
}

int main()
{
   box shehan;
   shehan.setwidth(20);
   getwidth(shehan);
}
