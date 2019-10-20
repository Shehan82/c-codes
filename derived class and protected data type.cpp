#include<iostream>
#include<string.h>
#include<conio.h>
#include<iomanip>
using namespace std;

class student
{	protected:
		string name;
	int age;
	public:
		void input()
		{
			cin>>name>>age;
		}
		
		void print();
};

class teacher:student
{
	public:
		void get()
		{
			cin>>name;
			cout<<name;
		}
};

void student::print()
{
	cout<<name<<" "<<age;
}

int main()
{
	student s1;
	s1.input();
	s1.print();
	teacher s2;
	s2.get();
	
	return 0;
}
