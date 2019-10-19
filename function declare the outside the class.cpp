#include<iostream>
#include<string>
using namespace std;

class functions
{
	public:
		void print();
};

void functions::print()
{
	cout<<"Hello i am the function outside the class";
}

int main()
{
	functions num1;
	num1.print();
}
