#include <iostream>
using namespace std;
// To solve this question break the crown in two parts
// Right Symmetry and Left Symmetry. 
// First print right one, then try to print left symmetry after completing first one
// Like this:
// 5
// 1____
// 12___
// 123__
// 1234_
// 12345
// ____1
// ___21
// __321
// _4321
// 54321
// Then right them in single outer loop, THe Answer is all yours ✨
int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<j;
        }
        for(int j=1; j<=n-i; j++)
        {
            cout<<" ";
        }
        for(int j=1; j<=n-i;j++)
        {
            cout<<" ";
        }
        for(int j=i; j>=1; j--)
        {
            cout<<j;
        }
        cout<<"\n";
    }
    return 0;
}
// I Did ittt !!! 😭✨