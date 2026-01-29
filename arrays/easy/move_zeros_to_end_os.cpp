#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> arr ={1,0,2,3,2,0,0,4,5,1};
    int n=arr.size();
    int i,j;
    for(i=0; i<n; i++) // for finding first zero element in arr and assigning j over there
    {
        if(arr[i]==0)
        {
            j=i;
            break;
        }
    }
    i=j+1; // i hamesha j ke aage rahega
    for(i; i<n; i++) //if found non zero then swap, else continue
    {
        if(arr[i]!=0)
        {
            swap(arr[j],arr[i]);
            j++; //j hamesha 1 se hi increment hoga. Pen and paper pe dry run krke dekh
        }
        else // arr[i]==0
        {
            continue;
        }
    }
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}