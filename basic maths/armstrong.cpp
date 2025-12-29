#include <iostream>
#include <cmath>
using namespace std;

// Problem Statement:Given an integer N, return true it is an Armstrong number otherwise return false.
// An Amrstrong number is a number that is equal to the sum of its own digits each raised to the power of the number of digits.

int digits(int n)
{
    int count = 0;
    if(n==0)
    {
        return 1;
    }
    else if(n<0)
    {
        n = (-1)*n;
    }
    while(n!=0)
    {
        n=n/10;
        count++;
    }
    return count;
}
int power(int a, int b)
{
    int mul =1;
    for(int i=1; i<=b; i++)
    {
        mul = mul*a;
    }
    return mul;
}
int Armstrong(int n)
{
    int ld;
    int sum=0;
    int digit = digits(n);
    while(n!=0)
    {
        ld=n%10;
        sum = power(ld, digit) + sum;
        n=n/10;
    }
    return sum;
}
int main()
{
    int n;
    cin>>n;
    // cout<<power(2,3);
    if(Armstrong(n)==n)
    {
        cout<<"True";
    }
    else
    {
        cout<<"false";
    }
    return 0;
}