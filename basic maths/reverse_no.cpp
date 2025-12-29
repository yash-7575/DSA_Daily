#include <iostream>
using namespace std;

// Problem Statement: Given an integer N return the reverse of the given number.
// Note: If a number has trailing zeros, then its reverse will not include them. For e.g , reverse of 10400 will be 401 instead of 00401.
int main()
{
    int n;
    int r_no=0;
    int ld;
    cin>>n; //1234 => 4321
    while(n!=0)
    {
        ld=n%10; // store last digit
        r_no= r_no *10 + ld; //add the ld to reversed no
        n=n/10; // remove the last digit
    }
    cout<<r_no;
    return 0;
}