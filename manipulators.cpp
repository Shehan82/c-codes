#include<iostream>
#include<string>
#include<iomanip>
#include<conio.h>
using namespace std;
 
 int main()
 {
 	cout<<setfill('*'); //this setfill function works only with setw function
 	cout<<setw(6)<<"1"<<endl;
 	cout<<setw(6)<<"10"<<endl;
 	cout<<setw(6)<<"100"<<endl;
 	cout<<setw(6)<<"1000"<<endl;
 	cout<<setw(6)<<"10000"<<endl;
 	cout<<setw(6)<<"100000"<<endl;
 	
 	cout<<setprecision(3)<<22/7.0<<endl<<endl;
 	
 	cout<<setbase(16)<<65<<endl;
 	cout<<setbase(10)<<0x41<<endl;
 	
 	cout<<setw(10)<<setiosflags(ios::right)<<"shehan"<<endl;
 	
 	cout<<setiosflags(ios::oct)<<65<<endl;
 	
 	cout<<setiosflags(ios::showpoint)<<22/7;
 	
 	getch();
 	return 0;
 	
 }
