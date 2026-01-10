#include <iostream>
#include <vector>
using namespace std;

void removeEven_withIterators(vector<int> &v)
{
    for(auto it=v.begin(); it!=v.end();)
    {
        if(*it%2==0)
        {
            it=v.erase(it);
        }
        else
        {
            ++it;
        }
    }
}
int main()
{
    vector<int> v={1,2,3,4,5,6};
    removeEven_withIterators(v);
    for(auto it=v.begin(); it!=v.end(); it++)
    {
        cout<<*it<<" ";
    }
    return 0;
}