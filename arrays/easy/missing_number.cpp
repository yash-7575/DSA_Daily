#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {0,1,2,3,6,5};
    int n = arr.size();
    for(int i=0; i<n; i++) // for whole numbers
    {
        bool isfound = false;
        for(int j=0; j<n; j++)
        {
            if(arr[j]==i)
            {
                isfound=true;
                break;
            }
        }
        if(!isfound)
        {
            cout<<i;
            break;
        }
    }
    return 0;
}