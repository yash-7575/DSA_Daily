#include <iostream>
using namespace std;

void selectionSort(int n, int arr[])
{
    for(int i=0; i<n; i++)
    {
        int minindex=i;
        for(int j=i+1; j<n; j++)
        {
            if(arr[j]<arr[minindex])
            {
                minindex=j;
            }
        }
        swap(arr[i],arr[minindex]);
    }
}
int main() {
    int arr[4]={3,2,1,4};
    selectionSort(4,arr);
    for (int i = 0; i < 4; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}