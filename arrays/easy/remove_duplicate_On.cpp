#include <iostream>
#include <vector>
using namespace std;

int removeDuplicate(vector<int> &arr)
{
    int a=arr[0];
    int index=1;
    for(int i=1; i<arr.size(); i++)
    {
        if(arr[i]==a)
        {
            continue;
        }
        else
        {
            a=arr[i];
            arr[index]=arr[i];
            index++;
        }
    }
    return index; 
}
int main()
{
    vector<int> arr = {1,1,2,2,2,3,3};
    int n = removeDuplicate(arr);
    cout<<n<<endl;
    for(int i=0; i<arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}