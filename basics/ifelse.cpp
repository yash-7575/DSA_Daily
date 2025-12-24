#include <iostream>
using namespace std;

class Solution
{
    public:
        void StudentGrade(int marks)
        {
            if(marks>90)
            {
                cout << "Grade A\n";
            }
            else if(marks>80)
            {
                cout << "Grade B\n";
            }
            else
            {
                cout << "Fail\n";
            }
        }
};
int main()
{
    Solution obj;
    obj.StudentGrade(92);
    obj.StudentGrade(82);
    obj.StudentGrade(78);
    return 0;
}