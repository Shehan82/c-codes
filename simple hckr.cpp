#include <iostream>
#include <string>
using namespace std;

int main() {
	string a,b;
	char c;
    cin>>a>>b;
    c=a[0];
    cout<<a.size()<<" "<<b.size()<<endl<<a+b<<endl;
    a[0]=b[0];
  	b[0]=c;
  	
  	cout<<a<<" "<<b;
    return 0;
}

