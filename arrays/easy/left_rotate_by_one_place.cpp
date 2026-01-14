#include <iostream>
using namespace std;

int main()
{
    int n=7;
    int arr[n]={4,1,2,3,5,7,8};
    // after left rotation => {1 2 3 5 7 8 4}
    int a=arr[0];
    for(int i=0; i<n-1; i++)
    {
        arr[i]=arr[i+1];
    }
    arr[n-1]=a;
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}