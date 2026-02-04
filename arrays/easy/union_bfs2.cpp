#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s;
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {4, 5, 6, 7, 8};
    for (int i = 0; i < 5; i++)
    {
        s.insert(arr1[i]);
        s.insert(arr2[i]);
    }
    for (auto i : s)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}