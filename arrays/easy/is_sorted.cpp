#include <iostream>
#include <vector>
using namespace std;

bool isSorted(vector<int> &arr)
{
    for(int i=0; i<arr.size()-1; i++)
    {
        if(arr[i]>arr[i+1])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    vector<int> arr={1,2,3,4};
    vector<int> arr1={3,2,1,4};
    bool a = isSorted(arr);
    bool b = isSorted(arr1);

    cout<<a<<" "<<b;
    return 0;
}