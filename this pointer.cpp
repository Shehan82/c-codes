#include<iostream>
using namespace std;

class shehan
{
	int a,b;
	public:
		void show(int a, int b)
		{
			this->a=a; //this pointer tell this a value(class member a) equals to left a
			this->b=b;
		}
		void display()
		{
			cout<<a<<endl<<b;
		}
};

int main()
{
	shehan t;
	t.show(10,20);
	t.display();
}
