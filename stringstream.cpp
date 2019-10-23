#include <string>       // std::string
#include <iostream>     // std::cout
#include <sstream>      // std::stringstream
using namespace std;

int main()
{
	stringstream ss;
	string word;
	
	ss<<"shehan sandeepa dassanayake";
	int count = 0; 
    while (ss >> word) 
        count++; 
    cout<<count;
}
