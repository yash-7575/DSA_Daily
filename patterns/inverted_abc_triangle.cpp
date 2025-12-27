#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    char alpha= 'A' + (n-1);
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<alpha;
            alpha++;
        }
        for(int j=1; j<=i+1; j++)
        {
            alpha--;
        }
        cout<<"\n";
    }
    return 0;
}