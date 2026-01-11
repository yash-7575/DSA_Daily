#include <iostream>
using namespace std;

void recursiveBubbleSort(int arr[], int n)
{
    if(n==1)
    {
        return;
    }
    for(int j=0; j<n-1; j++)
    {
        if(arr[j]>arr[j+1])
        {
            swap(arr[j],arr[j+1]);
        }
    }
    recursiveBubbleSort(arr,n-1);
}
int main() {
    int n=5;
    int arr[n]={4,1,2,3,5};
    recursiveBubbleSort(arr,n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}