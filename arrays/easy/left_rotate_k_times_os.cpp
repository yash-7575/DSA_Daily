#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// void reverse
int main()
{
    vector<int> arr = {1,2,3,4,5,6,7};
    int n=7;
    int k=3;
    k=k%n;
    reverse(arr.begin(), arr.begin()+k);
    for(int i=0; i<n; i++){cout<<arr[i]<<" ";}
    cout<<endl;
    reverse(arr.begin()+k, arr.end());
    for(int i=0; i<n; i++){cout<<arr[i]<<" ";}
    cout<<endl;
    reverse(arr.begin(), arr.end());
    for(int i=0; i<n; i++){cout<<arr[i]<<" ";}
    return 0;
}