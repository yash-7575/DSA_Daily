#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
    int temp=a;
    a=b;
    b=temp;
}
void reverse(int i, int n, int arr[])
{
    if(i>=n/2)
    {
        return;
    }
    swap(arr[i],arr[n-i-1]);
    reverse(i+1,n,arr);
}
int main()
{
    int n=4;
    int arr[n]={1,2,3,4};
    reverse(0,n-1,arr);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}