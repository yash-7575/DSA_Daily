#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    // For Upper Half
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n+i-1; j++)
        {
            if(j<=n-i)
            {
                cout<<" ";
            }
            else
            {
                cout<<"*";
            }
        }
        cout<<"\n";
    }
    
    // For Lower Half
    for(int i=n; i>=1; i--)
    {
        for(int j=1; j<=n+i-1; j++)
        {
            if(j<=n-i)
            {
                cout<<" ";
            }
            else
            {
                cout<<"*";
            }
        }
        cout<<"\n";
    }
    return 0;
}
// 😊✨
