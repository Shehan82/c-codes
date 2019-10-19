#include<iostream>
#include<string>
#include<cmath>
using namespace std;

class shehan 
{
	public:
		int age;
		string name;
	void print()
	{
		cout<<"Hello "<<name<<" you are "<<age<<" years old"<<endl; //in here we dont use the shehan.name
		                             //we only use name.
	}	
		
}num1;

int main()
{
	cout<<"Enter your name: ";
	cin>>num1.name;
	cout<<"Enter your age: ";
	cin>> num1.age;
	num1.print();
}
