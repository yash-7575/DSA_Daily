#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    int n=arr.size();
    int k = 2;
    for(int i=0; i<k; i++)
    {
        int a = arr[0];
        for(int j=0; j<n-1; j++)
        {
            arr[j]=arr[j+1];
        }
        arr[n-1]=a;
    }
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}