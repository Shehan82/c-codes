#include<iostream>
/*#include<climits> //INT_MIN , INT_MAX
#include<cfloat> 
#include<cmath> //for math functions
#include<cstdlib> //Prototypes of srand(), rand(): 
#include<string>*/
using namespace std;


int main()
{
	string prompt ("What is your name: "),name, line(40,'='), total="Hello ";
	
	cout<< prompt;
	getline(cin, name);
	
	total=total+name;
	
	cout<< line<<endl<<total<<endl;
	
	cout<<"your name is "<<name.length()<< " characters long!"<<endl;
	cout<<line<<endl;
	return 0;
	
}
