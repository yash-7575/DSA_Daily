#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;
    v.push_back(10);
    cout<<v[0]<<" ";
    v.push_back(20);
    cout<<v[1]<<endl;
    cout<<v.size()<<endl;
    cout<<v.capacity();
    return 0;
}