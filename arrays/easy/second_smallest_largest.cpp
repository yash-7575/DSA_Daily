#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int second_largest(vector<int> &arr, int n)
{
    int max=arr[n-1];
    int sec_large=-1;
    for(int i=n-2; i>=0; i++)
    {
        if(arr[i]!=max)
        {
            sec_large=arr[i];
            break;
        }
    }
    return sec_large;
}
int second_smallest(vector<int> &arr, int n)
{
    int min=arr[0];
    int sec_small=-1;
    for(int i=1; i<n; i++)
    {
        if(arr[i]!=min)
        {
            sec_small=arr[i];
            break;
        }
    }
    return sec_small;
}
int main()
{
    vector<int> arr={1,1,1};
    sort(arr.begin(), arr.end());
    int sec_large=second_largest(arr,arr.size());
    int sec_small=second_smallest(arr,arr.size());
    cout<<sec_small<<" "<<sec_large;
    return 0;
}