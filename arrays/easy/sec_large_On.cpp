#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int second_largest(vector<int> &arr, int n)
{
    int max=arr[0];
    int sec_large=-1;
    for(int i=0; i<n; i++)
    {
        if(arr[i]>max)
        {
            sec_large=max;
            max=arr[i];
        }
        else if(arr[i]<max && arr[i]>sec_large)
        {
            sec_large=arr[i];
        }
    }
    return sec_large;
}

int main()
{
    vector<int> arr = {1,3,2,4,1};
    vector<int> arr1 = {1,1,1};
    int sec_large=second_largest(arr,arr.size());
    cout<<sec_large<<endl;
    sec_large=second_largest(arr1,arr1.size());
    cout<<sec_large;
    return 0;
}