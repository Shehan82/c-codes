#include<iostream>
using namespace std;

class shehan
{
   private:
   int num1,num2;
   public:
   shehan()
   {
      num1=0;
      num2=0;
   }
   
   shehan(int a,int b)
   {
      num1=a;
      num2=b;
   }
   
   public:
   int print()
   {
      cout<<num1<<","<<num2<<endl;
      return 0;
   }
   
   shehan operator +(shehan num)
   {
      shehan temp;
      temp.num1=num1+num.num1;
      temp.num2=num2+num.num2;
      return temp;
   }
};

int main()
{
   shehan c1(2,4);
   shehan c2(4,6);
   shehan c3;
   c3= c1+c2;
   c3.print();
}
