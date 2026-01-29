#include <iostream>
#include <vector>
using namespace std;

void removeEven(vector<int> &v)
{
    for(int i=0; i<v.size(); i++)
    {
        if(v[i]%2==0)
        {
            v.erase(v.begin()+i);
            i--;
        }
    }
}
int main()
{
    vector<int> v={1,2,3,4,5 ,6};
    removeEven(v);
    for(auto it=v.begin(); it!=v.end(); it++)
    {
        cout<<*(it)<<" ";
    }
    return 0;
}