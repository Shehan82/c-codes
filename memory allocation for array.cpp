#include<iostream>
#include<string>
#include<iomanip>
#include<conio.h>
using namespace std;

int main()
{
	int n;
	cout<<"Enter the array size: ";
	cin>>n;
	
	int *p=new int[n];
	int i=0;
	for(i=0;i<n;i++)
	{
		cin>>*(p+i); //cin>>p[i]; we can use this too
	}
	for(i=0;i<n;i++)
	{
		cout<<p[i]<<"  ";
	}
	
	delete p;
	
	
	getch();
	
}
