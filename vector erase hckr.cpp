#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,i,b,w,x,y;
    cin>>n;
    vector<int> arr;
    
    for(i=0;i<n;i++)
    {
        cin>>b;
        arr.push_back(b);

    }
   

    cin>>w;
    arr.erase(arr.begin()+w-1);
    cin>>x>>y;
    arr.erase(arr.begin()+x-1,arr.begin()+y-1);
    int count=0;
  	for(i=0;i<n-(y-x+1);i++)
  	{
  		
  		count++;
	}
	cout<<count<<endl;
	for(i=0;i<n-(y-x+1);i++)
  	{
  		
  		cout<<arr[i]<<" ";
	}
   
    return 0;
}

