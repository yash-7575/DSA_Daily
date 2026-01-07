#include <iostream>
using namespace std;

void bubble_sort(int n, int arr[])
{
    for(int i=0; i<n-1; i++)
    {
        bool isSorted=false;
        for(int j=0; j<n-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                isSorted=true;
            }
        }
        if(!isSorted)
        {
            return;
        }
    }
}
int main() {
    int n=4;
    int arr[n]={3,2,4,1};
    bubble_sort(n,arr);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}