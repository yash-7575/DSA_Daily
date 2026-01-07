#include <iostream>
using namespace std;

int main() {
    int arr[]={1,2,3,0};
    int min=arr[0];
    for(int i=0; i<4; i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    cout<<min;
    return 0;
}