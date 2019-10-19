#include<iostream>
#include<string>
#include<iomanip>
#include<conio.h>
using namespace std;

int main()
{
	int **p,x,y,i,j;
	cout<<"Enter the x and y array size: ";
	cin>>x>>y;
	
	p=new int*[x];
	
	for(i=0;i<x;i++)
	{
		p[i]=new int[y];
	}
	
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			cin>>p[i][j];
		}
	}
	
	for(i=0;i<x;i++)
	{
		for(j=0;j<y;j++)
		{
			cout<<"p["<<i<<"]["<<j<<"] = "<<p[i][j]<<endl;
		}
	}
	
	delete p;
	
	
	getch();
	
}
