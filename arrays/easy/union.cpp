#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int>arr1={1,2,3,4,5,6};
    int n=arr1.size();
    vector<int>arr2={2,3,4,4,5};
    int m = arr2.size();
    int flag=0;
    // {1,2,3,4,5,6}
    vector<int> arr3;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(arr1[i]==arr2[j])
            {
                arr3.push_back(arr1[i]);
                flag=1;
            }
        }
        if(flag==0)
        {
            arr3.push_back(arr1[i]);
        }
    }
    for(int i=0; i<arr3.size(); i++)
    {
        cout<<arr3[i]<<" ";
    }
    return 0;
}