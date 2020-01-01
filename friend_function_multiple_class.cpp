#include<iostream>
#include<assert.h>
#include<string>
#include<vector>
using namespace std;

class height;

class width
{  public:
   int width1;
   width(int wid)
   {
      width1=wid;
   }
   public:
   friend void getarea(const width &w, const height &h);
};

class height
{  public:
   int height1;
   height(int hei)
   {
      height1=hei;
   }
   public:
   friend void getarea(const width &w, const height &h); 
};

void getarea(const width &w, const height &h)
{
   cout<<w.width1*h.height1<<endl;
}

int main()
{
   width w(10);
   height h(20);
   getarea(w,h);
}


