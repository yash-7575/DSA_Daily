#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int arr[] = {0,1,2,3,4,5,6,7,8,9};
    int n = 10;
    int k = 3;
    k=k%n;
    int temp[k]={0};
    for(int i=0; i<k; i++) {temp[i]=arr[i];}
    for(int i=0; i<k; i++) {cout<<temp[i]<<endl;}
    for(int i=k; i<n; i++) {arr[i-k]=arr[i];}
    for(int i=0; i<n; i++) {cout<<arr[i]<<" ";}
    cout<<endl;
    for(int i=n-k; i<n; i++) {arr[i]=temp[i-(n-k)];}
    for(int i=0; i<n; i++) {cout<<arr[i]<<" ";}
    // cout<<n;
    return 0;
}