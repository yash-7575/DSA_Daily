#include <iostream>
using namespace std;

void print_n_times(int n)
{
    if(n==0)
    {
        return;
    }
    string name = "Yash";
    cout<<name<<endl;
    print_n_times(n-1);
}
int main()
{
    int n;
    cin>>n;
    print_n_times(n);
    return 0;
}