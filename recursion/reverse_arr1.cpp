#include <iostream>
using namespace std;
void swap(int &a, int &b)
{
    int temp=a;
    a=b;
    b=temp;
}
void reverse(int l, int r, int arr[])
{
    if(l>=r)
    {
        return;
    }
    swap(arr[l],arr[r]);
    reverse(l+1,r-1,arr);
}
int main()
{
    int n=4;
    int arr[n]={1,2,3,4};
    reverse(0,n-1,arr);
    for (int i = 0; i < 4; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
