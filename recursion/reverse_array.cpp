#include <iostream>
using namespace std;

int main()
{
    int arr[4] = {1,2,3,4};
    int rev[4];
    for(int i=0; i<4; i++)
    {
        rev[i]=arr[3-i];
    }
    for(int i=0; i<4; i++)
    {
        cout<<rev[i];
    }
}