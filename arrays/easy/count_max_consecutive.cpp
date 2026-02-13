#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {1,1,1,0,0};
    int n = arr.size();
    int count = 1;
    for(int i=0; i<n; i++)
    {
        if(arr[i]==arr[i+1]==1)
        {
            count=count+1;
        }
    }
    cout<<count;
    return 0;
}