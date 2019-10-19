#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main()
{
	string word="I have learned something new again!",sum,a,b;
	
	cout<<word<<endl;
	
	getline(cin,a);
	getline(cin,b);
	
	sum= a + "*" + b;
	
	cout<< sum;
	
	
	
	return 0;
}
