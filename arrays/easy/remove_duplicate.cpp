#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {1,1,2,2,2,3,3,3};
    int n = arr.size();
    int i=0;
    for(int j=1; j<n; j++)
    {
        if(arr[i]==arr[j])
        {
            continue;
        }
        else
        {
            i++;
            arr[i]=arr[j];
        }
    }
    cout<<i+1<<endl;
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}