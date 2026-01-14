#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {2,1,4,6};
    arr.erase(arr.begin()+1);
    for(int i=0; i<arr.size(); i++)
    {
        cout<<arr[i];
    }
    return 0;
}