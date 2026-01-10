#include <iostream>
#include <vector>
using namespace std;

int add(vector<int> v)
{
    v[0]=v[0]+10;
    return v[0];
}
int main()
{
    vector<int> v;
    v.push_back(10);
    int first=add(v);
    cout<<first<<endl;
    cout<<v[0];
    //Output : 
    // 20
    // 10
    // bcz its passes by value (copy is passed) not by ref..
    return 0;
}