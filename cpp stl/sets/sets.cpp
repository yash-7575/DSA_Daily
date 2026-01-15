#include <iostream>
#include <set>
using namespace std;
// Properties: unique elements only, In sorted order (ascending by default)
// 1. No duplicates
// 2. Automatically sorted
// 3. Fast lookup, insert and delete
// 4. No index access (set[i] X)

int main()
{
    set<int>s;

    // Insertion
    s.insert(1);
    s.insert(5);
    s.insert(3);
    s.insert(5); // ignored (duplicate)
    // set s = {3,5}

    //Search:

    if(s.find(3)!=s.end())
    {
        cout<<true<<endl;
    }
    for(auto x:s)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    cout<<s.size()<<endl;
    s.erase(3);
    for(auto x:s)
    {
        cout<<x<<" ";
    }
    return 0;
}