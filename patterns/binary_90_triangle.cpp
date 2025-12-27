#include <iostream>
using namespace std;
// 1
// 0 1
// 1 0 1
// 0 1 0 1
// 1 0 1 0 1
// Odd Rows start with 1 and Even Rows start with 0
int main()
{
    int n;
    cin>>n;
    int temp1=1, temp2=0;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            if(i%2!=0) // For Odd
            {
                cout<<temp1<<" ";
                temp1--;
            }
            else //For Even
            {
                cout<<temp2<<" ";
                temp2++;
            }
            if(temp1==-1)
            {
                temp1=1;
            }
            if(temp2==2)
            {
                temp2=0;
            }
        }
        if(temp1==0)
        {
            temp1=1;
        }
        cout<<"\n";
    }
    return 0;
}