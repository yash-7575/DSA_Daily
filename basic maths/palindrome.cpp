#include <iostream>
using namespace std;
// Problem Statement: Given an integer N, return true if it is a palindrome else return false.
// A palindrome is a number that reads the same backward as forward. For example, 121, 1331, and 4554 are palindromes because they remain the same when their digits are reversed.

int reverse(int n)
{
    int ld, r_no=0;
    while(n!=0)
    {
        ld=n%10;
        r_no=r_no*10 + ld;
        n=n/10;
    }
    return r_no;
}
int main()
{
    int n;
    cin>>n;
    if(reverse(n)==n)
    {
        cout<<"Palindrome";
    }
    else
    {
        cout<<"Not Palindrome";
    }
    return 0;
}