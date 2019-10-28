#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,i,b;
    cin>>n;
    vector<int> arr;
    for(i=0;i<n;i++)
    {
        cin>>b;
        arr.push_back(b);
    }

    sort(arr.begin(),arr.end());
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
