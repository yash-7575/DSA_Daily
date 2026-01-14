#include <iostream>
#include <vector>
using namespace std;

int removeDuplicate(vector<int> &arr)
{
    int a=arr[0];
    for(int i=1; i<arr.size(); i++)
    {
        if(a==arr[i])
        {
            arr.erase(arr.begin()+i);
            i--; // Most IMP!!! otherwise it skips the new element
        }
        else
        {
            a=arr[i];
        }
    }
    return arr.size(); 
}
int main()
{
    vector<int> arr = {1,1,1,2,2,2,3,3};
    int n = removeDuplicate(arr);
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}