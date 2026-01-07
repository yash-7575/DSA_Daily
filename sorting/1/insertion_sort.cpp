#include <iostream>
using namespace std;

void insertionSort(int n, int arr[])
{
    for(int i=1; i<n-1; i++)
    {
        int j=i;
        while(j>0 && arr[j]<arr[j-1])
        {
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
}
int main() {
    int n=4;
    int arr[n]={3,2,1,4};
    insertionSort(n,arr);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}