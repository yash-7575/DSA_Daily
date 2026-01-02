#include <iostream>
using namespace std;

// Input: number of elements of arr and arr elements
// Total elements that we want to find count of and the elements
// Output: Tells count of each 
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int hash[13]={0};
    for(int i=0; i<n; i++)
    {
        hash[arr[i]]+=1;
    }
    int q;
    cin>>q;
    for(int i=0; i<q; i++)
    {
        int num;
        cin>>num;
        cout<<"number is repeated "<<hash[num]<<" times"<<endl;
    }
    return 0;
}