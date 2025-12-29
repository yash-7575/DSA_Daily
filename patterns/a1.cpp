#include <iostream>
using namespace std;

int min(int a, int b, int c, int d)
{
    if(a<=b && a<=c && a<=d)
    return a;
    else if(b<=c && b<=d)
    return b;
    else if(c<=d)
    return c;
    else
    return d;
}
int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=2*n-1; i++)
    {
        for(int j=1; j<=2*n-1; j++)
        {
            int top=i-1;
            int left=j-1;
            int bottom=(2*n-i)-1;    
            int right=(2*n-j)-1;
            int layer=min(top, left, bottom, right);
            int num=n-layer;
            cout<<num;
        }
        cout<<"\n";
    }
    return 0;
}