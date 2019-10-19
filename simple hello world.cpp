#include<iostream>
using namespace std;
class shehan
{
	int age;
	char name[20];
	float sallary;
	public:
		void get()
		{
			cout << "Enter the age: ";
			cin >> age;
			cout << "Enter the name: ";
			cin >> name;
			cout << "Age = "<< age << endl;
			cout << "Name = "<< name<< endl;
		}
		void hello();
};

void shehan::hello()
{
	cout << "i'am back bitches";
}

int main()
{
	shehan t;
	t.get();
	t.hello();
	return 0;
}
