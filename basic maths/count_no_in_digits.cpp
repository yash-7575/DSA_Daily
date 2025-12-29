#include <iostream>
using namespace std;

int no_of_digits(int n)
{
    int count = 0;
    if(n==0)
    {
        return 1;
    }
    else if(n<0)
    {
        n=(-1)*n;
    }
    while(n!=0)
    {
        n=n/10;
        count++;
    }
    return count;
}
int main()
{
    int n;
    cin>>n;
    cout<<no_of_digits(n);
    return 0;
}