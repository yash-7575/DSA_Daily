#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {1,0,2,3,0,4,0,1};
    int n= arr.size();
    vector<int> temp;
    for(int i=0; i<n; i++){   
        if(arr[i]!=0)
        {
            temp.push_back(arr[i]);
        }
    }
    int j=0;
    for(int i=0; i<n; i++){
        if(i<temp.size())
        {
            arr[i]=temp[j];
            j++;
        }
        else
        {
            arr[i]=0;
        }
    }
    for(int i=0; i<n; i++){cout<<arr[i]<<" ";}
    return 0;
}