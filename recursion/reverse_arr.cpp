#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
    int temp=a;
    a=b;
    b=temp;
}
void reverse(int n, int arr[])
{
    for(int i=0; i<n/2; i++)
    {
        swap(arr[i],arr[n-i-1]);
    }
}
int main()
{
    int arr[4]= {1,2,3,4};
    int arr1[5]={1,2,3,4,5};
    reverse(5,arr1);
    for(int i=0; i<5; i++)
    {
        cout<<arr1[i]<<endl;
    }
    return 0;
}